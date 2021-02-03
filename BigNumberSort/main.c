#include <stdio.h>
#include "string.h"
int CompareBigNumber(char *s1,char *s2);
void Exchange(char *s1,char *s2);

int main() {
//    FILE *fp;
//    fp=fopen("../data.txt","r");
    int number=0;
    scanf("%d",&number);
    char array[number][1200];
    for (int i = 0; i < number; ++i) {
        scanf("%s",array[i]);
    }
    for (int i = 0; i < number; ++i) {
        for (int j = 1; j < number-i; ++j) {
            if (CompareBigNumber(array[j-1],array[j])>0){
                Exchange(array[j-1],array[j]);
            }
        }
    }
    for (int i = 0; i < number; ++i) {
        printf("%s\n",array[i]);
    }
    return 0;
}
void Exchange(char *s1,char *s2){
    char temp[1200];//why temp need to be temp[1200]rather than *temp or it will overload
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
}
int CompareBigNumber(char *s1,char *s2){
    int len1,len2;
    int flag=0;
    len1=strlen(s1);
    len2=strlen(s2);
    if (len1>len2){
        flag=1;
    } else{
        if (len1<len2){
            flag=-1;
        } else{
            flag=strcmp(s1,s2);
        }
    }
    return flag;
}