#include <stdio.h>
#include "string.h"
int main() {
    char s[1001];
    int len=0;
    while (scanf("%s",s)!=EOF){
        len=strlen(s);
        int flag=1;
        for (int i = 0 ; i < len; ++i) {
            if (s[i]!=s[len-i-1]){
                flag=0;
                break;;
            }
        }
        if (flag){
            printf("Yes!\n");
        } else{
            printf("No!\n");
        }
    }
    return 0;
}
