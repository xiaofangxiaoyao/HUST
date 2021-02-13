#include <stdio.h>
#include "string.h"

int main() {
    char s[200];
    gets(s);
    printf("%s",s);
    int len=strlen(s);
    int kongge_len=0;
    int zimu_len=0;
    for (int i = 0; i < len; ++i) {
        if (s[i]==' '){
            kongge_len++;
        }
    }
    zimu_len=len-kongge_len;
    printf("char:%d\n",zimu_len);
    int kongge_number=0;
    int danci_number=0;
    for (int i = 0; i < len; ++i) {
        if (s[i]==' '){
            i++;
            kongge_number++;
            while (s[i]!=' '){
                i++;
            }
        }
    }
    danci_number=kongge_number+1;
    printf("danci:%d\n",danci_number);
    int zimu_calculate[27];//zimu_calculate[0] is the biggest number
    for (int i = 0; i < 27; ++i) {
        zimu_calculate[i]=0;
    }
    for (int i = 0; i < len; ++i) {
        if (s[i]!=" "){
            if (s[i]>='a'&s[i]<='z'){
                zimu_calculate[s[i]-'a'+1]++;
            }
            if (s[i]>='A'&s[i]<='Z'){
                zimu_calculate[s[i]-'A'+1]++;
            }
        }
    }
    int max=0;
    for (int i = 1; i < 27; ++i) {
        if (zimu_calculate[i]>max){
            max=zimu_calculate;
        }
    }
    zimu_calculate[0]=max;
    printf("max char:");
    for (int i = 1; i < 27; ++i) {
        if (zimu_calculate[i]==zimu_calculate[0]){
            printf("%c",i+'a'-1);
        }
    }
    printf("\n");
    printf("number: ",zimu_calculate[0]);
    return 0;
}
