#include <stdio.h>

int main() {
    FILE *fp;
    fp=fopen("../abc.c","w+");
    if (fp==NULL){
        printf("can not read the file");
    }
    char s[200];
    int i=1;
    while (fgets(s,200,fp)!=NULL){
        printf("%d %s\n",i,s);
        i++;
    }
    return 0;
}
