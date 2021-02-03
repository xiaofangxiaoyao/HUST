#include <stdio.h>

int main() {
    int number;
    scanf("%d",&number);
    int odd,even;
    if(number%2==0){
        even=number;
        odd=number-1;
    } else{
        odd=number;
        even=number-1;

    }
    int array[number+1];
    array[0]=1;
    for (int i = 1; i < number+1; i=i+1) {
        array[i]=array[i-1]*i;
    }
    int odd_sum,evensum;
    odd_sum=0;
    evensum=0;
    for (int i = 1; i <odd+2 ; i=i+2) {
        odd_sum=array[i]+odd_sum;
    }
    for (int i = 2; i <even+2 ; i=i+2) {
        evensum=array[i]+evensum;
    }
    printf("%d %d",odd_sum,evensum);
    return 0;
}
