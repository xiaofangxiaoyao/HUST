#include <stdio.h>
void BubbleSortFile(void);
void BubbleSort(void);



int main() {
//    BubbleSortFile();
    BubbleSort();
    return 0;
}
void BubbleSort(void){
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
    for (int i = 0; i < number; ++i) {
        printf("%d ",array[i]);
    }

}
void BubbleSortFile(void){
    FILE *fp_in;
    FILE *fp_out;
    fp_in=fopen("../data_in.txt", "r");
    fp_out=fopen("../data_out.txt","w+");
    if (fp_in == NULL)
    {
        printf("can't read the file");
    }
    if (fp_out==NULL)
    {
        printf("cann't write the file");
    }
    int number;
    fscanf(fp_in,"%d",&number);
    int array[number];
    for (int i = 0; i < number; ++i) {
        fscanf(fp_in,"%d",&array[i]);
    }
    for (int i = 0; i < number; ++i) {
        printf("%d",array[i]);
        printf("\n");
    }
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
    for (int i = 0; i < number; ++i) {
        printf("%d",array[i]);
    }

}