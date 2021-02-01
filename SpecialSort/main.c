#include <stdio.h>
void SpecialSort();

int main() {
    SpecialSort();
    return 0;
}
void SpecialSort(){
    int number;
    scanf("%d",&number);
    int array[number];
    for (int i = 0; i < number; ++i) {
        scanf("%d",&array[i]);
    }
//    for (int i = 0; i < number; ++i) {
//        printf("%d",array[i]);
//        printf("\n");
//    }
    for (int i = 0; i < number; ++i) {
        for (int j = 1; j <number-i ; ++j) {
            int temp;
            if (array[j-1]>array[j]){
                temp=array[j-1];
                array[j-1]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("%d\n",array[number-1]);
    if (number==1){
        printf("-1");
    } else{
        for (int i = 0; i < number-1; ++i) {
            printf("%d ",array[i]);
        }
    }

}