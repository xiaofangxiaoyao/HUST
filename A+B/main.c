#include <stdio.h>
#include "stdlib.h"
#include "string.h"
void Add(void);
int main() {
    Add();
    return 0;
}
void Add(void){
//    FILE* fp;
//    fp=fopen("../data.txt","r");
    char array[2][100][20];
    char in[2][20];
    int sum[3];
    while ((scanf("%s",in[0])!=EOF)&&scanf("%s",in[1])!=EOF){
        int first,second;
        for (int i = 0; i < 2; ++i) {
            char *p;
            p=strtok(in[i],",");
            int j=0;
            while (p!=NULL){
                strcpy(array[i][j],p);
                j++;
                p=strtok(NULL,",");
            }
            if (i==0){
                first=j;
            } else{
                second=j;
            }
        }
//        for (int i = 0; i < 2; ++i) {
//            for (int j = 0; j < 3; ++j) {
//                printf("%s\n",array[i][j]);
//            }
//        }
        char number[2][20];
        for (int i = 0; i < 2; ++i) {
            char *temp=array[i][0];
            int n;
            if (i==0){
                n=first;
            } else{
                n=second;
            }
            for (int j = 1; j < n; ++j) {
                strcat(temp,array[i][j]);
//                printf("temp=%s\n",temp);
            }
            strcpy(number[i],temp);
        }
//        for (int i = 0; i < 2; ++i) {
//            printf("number[%d]=%s\n",i,number[i]);
//        }
        printf("%d\n",atoi(number[0])+atoi(number[1]));
    }

}