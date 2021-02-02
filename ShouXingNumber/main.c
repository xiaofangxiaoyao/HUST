#include <stdio.h>
#include "math.h"
void DigitAnalise(void);
int IsShouXingNumber(int number);
int main() {
    DigitAnalise();
    return 0;
}
void DigitAnalise(void){
    int number;
    while (scanf("%d",&number)!=EOF){
        if (IsShouXingNumber(number)){
            printf("Yes!\n");
        } else{
            printf("No!\n");
        }
    }
}
int IsShouXingNumber(int number){
    int n;
    int number_double=number*number;
    int i=number;
    for (n=0; ; ++n) {
        i=i/10;
        if (i==0){
            break;
        }
    }
    n++;
//    printf("10^n=%d",(int)pow(10,n));
    int left=number_double%(int )(pow(10,n));//in c you can't use 10^n ,you need use (int)pow(10,n)
    if (left==number){
        return 1;
    } else{
        return 0;
    }

}