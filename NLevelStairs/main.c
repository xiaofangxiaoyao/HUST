#include <stdio.h>
int Solve(int number);
int SolveWithoutRecursion(int number);

int main() {
    int number;
    int result;
    scanf("%d",&number);
//    result=Solve(number);
    result=SolveWithoutRecursion(number);
    printf("%d",result);
    return 0;
}
int Solve(int number){
    int result=0;
    if (number==1){
        result=1;
    } else{
        if (number==2){
            result=2;
        } else{
            result=Solve(number-1)+Solve(number-2);
        }
    }
    return result;
}
int SolveWithoutRecursion(int number){
    int array[number];
    array[0]=1;
    array[1]=2;
    for (int i = 2; i < number; ++i) {
        array[i]=array[i-1]+array[i-2];
    }
    return array[number-1];
}