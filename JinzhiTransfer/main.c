#include <stdio.h>
#include "string.h"

int main() {
    char s[200];
    scanf("%s",s);
    int len=strlen(s);
    int ten_number=0;
    int base=1;
    for (int i = len-1; i >=0; --i) {
        if (s[i]>='a'){
            ten_number=(s[i]-'a'+10)*base+ten_number;
        } else{
            ten_number=(s[i]-'0')*base+ten_number;
        }
        base=base*12;
    }
    printf("%d\n",ten_number);
    int array[32];
    for (int i = 0; i < 32; ++i) {
        array[i]=0;
    }
    int shang;
    int yu;
    shang=ten_number;
    int i=31;
    while (shang!=0){
        yu=shang%2;
        array[i]=yu;
        i--;
        shang=shang/2;
    }
    for (int j = 0; j < 32; ++j) {
        printf("%d",array[j]);
        if ((j+1)%8==0){
            printf(" ");
        }
    }

    return 0;
}
