#include <stdio.h>
#include "string.h"

int main() {
    char s1[2000];
    char s2[2000];
    while (scanf("%s",s1)!=EOF&& scanf("%s",s2)!=EOF){
        int len1=strlen(s1);
        int len2=strlen(s2);
        int max_len;
        if (len1==len2){
            max_len=len1+1;
            char s3[max_len+1];
            int flag=0;
            int j=len1-1;
            for (int i = max_len-1; i >=1; --i) {
                if (s1[j]+s2[j]+flag-2*'0'>=10){
                    s3[i]=flag+s1[j]+s2[j]-'0'-10;
                    flag=1;
                } else{
                    s3[i]=flag+s1[j]+s2[j]-'0';
                    flag=0;
                }
                j--;
            }
            if (flag){
                s3[0]='1';
                s3[max_len]='\0';
            } else{
                max_len=max_len-1;
                for (int i = 1; i <max_len+1; ++i) {
                    s3[i-1]=s3[i];
                }
                s3[max_len]='\0';
            }
            printf("%s",s3);
        } else{
            if (len1<len2){//ensure len1>len2
                char temp[2000];
                strcpy(temp,s1);
                strcpy(s1,s2);
                strcpy(s2,temp);
                int temp2;
                temp2=len1;
                len1=len2;
                len2=temp2;
            }
            max_len=len1+1;
            char s3[max_len+1];
            int flag=0;
            int j,k;
            j=len1-1;
            k=len2-1;
            for (int i = max_len-1; i >=1; --i) {
                if (k>=0){
                    if (s1[j]+s2[k]+flag-2*'0'>=10){
                        s3[i]=flag+s1[j]+s2[k]-'0'-10;
                        flag=1;
                    } else{
                        s3[i]=flag+s1[j]+s2[k]-'0';
                        flag=0;
                    }
                    j--;
                    k--;
                } else{
                    if (s1[j]+flag-'0'>=10){
                        s3[i]=flag+s1[j]-10;
                        flag=1;
                    } else{
                        s3[i]=flag+s1[j];
                        flag=0;
                    }
                    j--;
                }
            }
            if (flag){
                s3[0]='1';
                s3[max_len]='\0';
            } else{
                max_len=max_len-1;
                for (int i = 1; i <max_len+1; ++i) {
                    s3[i-1]=s3[i];
                }
                s3[max_len]='\0';
            }
            printf("%s\n",s3);
        }
    }
    return 0;
}
