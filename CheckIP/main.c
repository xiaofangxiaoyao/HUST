#include <stdio.h>
#include <stdlib.h>
#include "string.h"
void CheckIPFile(void);
void CheckIP(void);
int main() {
//    CheckIPFile();
    CheckIP();
    return 0;
}
void CheckIP(void){
    int number=4;//ip consists of four interger
    int digit=3+1;//every interger is not bigger than three digit
    char StringArray[number][digit];
    char str[100];//how to dynamic association???

    while(scanf("%s",str)!=EOF){
//    fprintf(fp_out,"%s",str);
        int j=0;
        for (int i = 0; i < number; ++i) {
            int temp=0;
            while (str[j]!='.'&&str[j]!='\0'){ //never mess up with '.'and "."
//            printf("str[%d]=%c\n",j,str[j]);
                StringArray[i][temp]=str[j];
//            printf("StringArray[%d][%d]=%c\n",i,temp,StringArray[i][temp]);
                temp++;
                j++;
            }
            StringArray[i][temp]='\0';
            j++;
        }
        int flag=0;
        for (int i = 0; i <number ; ++i) {
            int digit_number=atoi(StringArray[i]);
            if (digit_number<0||digit_number>255){
                flag=1;
            }
        }
        if (flag){
            printf("No!\n");
        }
        else{
            printf("Yes!\n");
        }

    }

}
void CheckIPFile(void){
    FILE *fp_in;
    FILE *fp_out;
    int number=4;//ip consists of four interger
    int digit=3+1;//every interger is not bigger than three digit
    char StringArray[number][digit];
    char str[100];//how to dynamic association???
    fp_in=fopen("../data_in.txt","r");
    fp_out=fopen("../data_out.txt","w+");
    if (fp_in==NULL){
        printf("can't read the file");
    }
    if(fp_out==NULL){
        printf("can't write the file");
    }
    while(fscanf(fp_in,"%s",str)!=EOF){
        printf(str);
        printf("\n");
//    fprintf(fp_out,"%s",str);
        int j=0;
        for (int i = 0; i < number; ++i) {
            int temp=0;
            while (str[j]!='.'&&str[j]!='\0'){ //never mess up with '.'and "."
//            printf("str[%d]=%c\n",j,str[j]);
                StringArray[i][temp]=str[j];
//            printf("StringArray[%d][%d]=%c\n",i,temp,StringArray[i][temp]);
                temp++;
                j++;
            }
            StringArray[i][temp]='\0';
            j++;
        }
        int flag=0;
        for (int i = 0; i <number ; ++i) {
            //remember the function atoi in stdlib.h to change string to int
            int digit_number=atoi(StringArray[i]);
            if (digit_number<0||digit_number>255){
                flag=1;
            }
        }
        if (flag){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }

    }


}
