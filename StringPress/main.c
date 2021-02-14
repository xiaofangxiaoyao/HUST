#include <stdio.h>
#include "string.h"

int main() {
    char s[100];
    scanf("%s",s);
    int len_s=strlen(s);
    int j=0;
    if ((len_s%2)==0){
        int len_save=len_s/2;
        char save[len_save];
        for (int i = 0; i < len_s; i=i+2) {
            save[j]=10*(s[i]-'0')+(s[i+1]-'0')+32;
            j++;
        }
        for (int i = 0; i < len_save; ++i) {
            printf("%c",save[i]);
        }
    }else{
        int len_save=len_s/+1;
        char save[len_save];
        s[len_s]='0';
        len_s++;
        s[len_s]='\0';
        for (int i = 0; i < len_s;i= i+2) {
            save[j]=10*(s[i]-'0')+(s[i+1]-'0')+32;
            j++;
        }
        for (int i = 0; i < len_save; ++i) {
            printf("%c",save[i]);
        }
    }
    return 0;
}
