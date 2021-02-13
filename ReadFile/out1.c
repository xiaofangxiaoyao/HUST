#include <stdio.h>
/*hello
 * */
#include "math.h"
int IsShuShu(long n);
int main() {
    long number;
    scanf("%d",&number);
    int i;
    for (i = 2;  ; ++i) {
        if (number< (long )pow(2.0,i*1.0)-1){
            break;
        }
    }
    i=i-1;
    for (int j = 2; j <= i; ++j) {
        if (IsShuShu(j)){
            printf("M(%d)=%d\n",j,(int)pow(2.0,j*1.0)-1);
        }
    }

    return 0;
}
int IsShuShu(long n){
    int isshushu=1;
    if (n!=2){
        for (int i = 2; i < n; ++i) {
            if (n%i==0){
                isshushu=0;
                break;
            }
        }
    }
    return isshushu;
}
