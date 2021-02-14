#include <stdio.h>

int main() {
    int array[7];
    for (int i = 0; i < 7; ++i) {
        scanf("%d",&array[i]);
    }
    int max,min;
    max=0;
    min=100;
    for (int i = 0; i < 7; ++i) {
        if (array[i]>max){
            max=array[i];
        }
        if (array[i]<min){
            min=array[i];
        }
    }
    int max_flag=1;
    int min_flag=1;
    for (int i = 0; i < 7; ++i) {
        if (array[i]==max){
            if (max_flag){
                array[i]=0;
                max_flag=0;
            }
        }
        if (array[i]==min){
            if (min_flag){
                array[i]=0;
                min_flag=0;
            }
        }
    }
    double average=0.0;
    int sum=0;
    for (int i = 0; i < 7; ++i) {
        sum=array[i]+sum;
    }
    average=sum*1.0/5.0;
    printf("%.1lf",average);
    return 0;
}
