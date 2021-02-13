#include <stdio.h>
#include "stdlib.h"
#include "string.h"

int main() {
    FILE *fp;
    fp=fopen("../abc.c","r+");
    FILE *fpout;
    fpout=fopen("../out1.c","w");
    if (fp==NULL){
        printf("can not read the file");
    }
    if (fpout==NULL){
        printf("can't read out1.c");
    }
    char s[200];
    int i=1;
    while (fgets(s,200,fp)!=NULL){
//        printf("%d %s\n",i,s);
        i++;
    }
    rewind(fp);
    while (fgets(s,200,fp)!=NULL){
        for (int j = 0; j < 200; ++j) {
            if (s[j]=='\0'){
                break;
            }
            if (s[j]=='/'&&s[j+1]=='/'){
                s[j]='\0';
                break;
            }
        }
//        printf("%s",s);
        fputs(s,fpout);
    }
    rewind(fp);
    fpout=fopen("../out2.c","w+");
    int file_size;
    char *temp;
    fseek(fp,0,SEEK_END);
    file_size=ftell(fp);
    temp=(char *)malloc(file_size*sizeof (char ));
    memset(temp,'\0',file_size*sizeof(char));
    fseek(fp,0,SEEK_SET);
    fread(temp,sizeof (char),file_size,fp);
    temp[file_size-1]='\0';
    int number;
    for (int j = 0; j < file_size; ++j) {
        if (temp[j]=='/'&&temp[j+1]=='*'){
            temp[j]=' ';
            temp[j+1]=' ';
            j=j+2;
            while (temp[j]!='*'||temp[j+1]!='/'){
                temp[j]=' ';
                j++;
            }
            temp[j]=' ';
            temp[j+1]=' ';
            j=j+2;
        }
    }
    printf("%s",temp);
    fprintf(fpout,"%s",temp);
    return 0;
}
