#include <stdio.h>
#include "string.h"
void BigData(void);
void NewArray(char * a,int len);
char* add(char*first ,int first_length,char *second,int second_length,int * maxlen);
void clean(char*a,int  len);
void printfarray(char* a,int len);
void test();

int main() {
    BigData();
//    test();
    return 0;
}

void clean(char*a,int len){
    for (int i = 0; i < len; ++i) {
            a[i]=a[i]-'0';
    }
}
void NewArray(char * a,int len){
    char newarray[2000];
    int i,j;
    for ( i = 0,j=len-1; j>=0 ; ++i,--j) {
        newarray[i]=a[j];
    }
    for (int k = 0; k < len; ++k) {//一定要注意，当char*指针传递时候遇到了‘\0'（可以写0）时候，对于后面所有操作全部视为不可见，所以要慎重
        a[k]=newarray[k]+'0';
    }
}
char* add(char*first ,int first_length,char *second,int second_length,int* maxlen){
    clean(first,first_length);
    clean(second,second_length);
    NewArray(first,first_length);
    NewArray(second,second_length);
    for (int i = 0; i < *maxlen; ++i) {
        if (i<first_length&&i<second_length){//同理
            if (first[i]+second[i]-2*'0'>9){
                first[i]=first[i]+second[i]-10-'0';
                first[i+1]++;
            } else{
                first[i]=first[i]+second[i]-'0';
            }
        } else{
            if (first[i]+second[i]-'0'>9){
                first[i]=first[i]+second[i]-10;
                first[i+1]++;
            } else{
                first[i]=first[i]+second[i];
            }
        }
    }
    if (first[*maxlen]!='\0'){
        *maxlen++;
    }
    return first;
}
// print the array from the back to the front since without '\0'
void printfarray(char* a,int len){
    for (int i = len;i>=0; --i) {
        if (a[i]!='\0'){
            printf("%c",a[i]);
        }
    }
    printf("\n");
}



void BigData(void){
    char first[2000];
    char second[2000];
    char* total;
    int first_length;
    int second_length;
    while (scanf("%s",first)!=EOF&&scanf("%s",second)!=EOF) {
        first_length = strlen(first);
        second_length = strlen(second);
        int maxlen;
        if (first_length > second_length){
            maxlen=first_length;
        } else{
            maxlen=second_length;
        }
        total=add(first ,first_length,second,second_length,&maxlen);
        printfarray(total,maxlen);
        for (int i = 0; i < 1000; ++i) {
            first[i]='\0';
            second[i]='\0';
        }
    }
}

