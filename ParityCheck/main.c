#include <stdio.h>
#include "string.h"
void ParityCheck(void);
void exective(char s,char a[8]);

int main() {
    ParityCheck();
    return 0;
}
void ParityCheck(void){
    char s[200];
    while (scanf("%s",s)!=EOF){
        int len=strlen(s);
        char save[len][8];
        for (int i = 0; i < len; ++i) {
            exective(s[i],save[i]);
        }
        for (int i = 0; i < len; ++i) {
            for (int j = 7; j >=0; --j) {
                printf("%d",save[i][j]);
            }
            printf("\n");
        }
    }
}
void exective(char s,char a[8]){
    for (int i = 0; i < 7; ++i) {
        a[i]=s%2;
//        printf("a[i]=%d",a[i]);
        s=s/2;
    }
    int number=0;
    for (int i = 0; i < 7; ++i) {
        if(a[i]==1){
            number++;
        }
    }
    if (number%2==0){
        a[7]=1;
    } else{
        a[7]=0;
    }
}