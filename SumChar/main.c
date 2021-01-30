#include <stdio.h>
#include "string.h"
void SumCharFile(void);
void SumChar(void);


int main() {
//    SumCharFile();
    SumChar();
    return 0;
}

void SumCharFile(void){
    FILE *fp_in;
    FILE *fp_out;
    char str[100];
    fp_in=fopen("../data_in.txt","r");
    fp_out=fopen("../data_out.txt","w+");
    if (fp_in==NULL){
        printf("can't read file");
    }
    if (fp_out==NULL){
        printf("can't write file");
    }
    fscanf(fp_in,"%s",str);
    int len=strlen(str);
//    printf(str);
    while (str[len-1]!='.'){
        printf("%d ",len);
        fscanf(fp_in,"%s",str);
        len=strlen(str);
    }
    printf("%d\n",len-1);
}
void SumChar(void){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
//    printf(str);
    while (str[len-1]!='.'){
        printf("%d ",len);
        scanf("%s",str);
        len=strlen(str);
    }
    printf("%d\n",len-1);
}