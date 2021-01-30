#include <stdio.h>
void  MatrixTrans_File(void);
void MatrixTrans(void);

int main() {
//    MatrixTrans();
    MatrixTrans_File();
    return 0;

}
void MatrixTrans(void){
    int rank=0;
    scanf("%d", &rank);
    int array[rank*rank];               //now you can use this in C that is fantastic
    for(int i=0;i<rank;i++){
        for (int j=0;j<rank;j++){
            scanf("%d", &array[i * rank + j]);//how can i use the pointer rather than array
        }
    }
    for(int i=0;i<rank;i++){
        for (int j=0;j<rank;j++){
            printf("%d ",array[j*rank+i]);
        }
        printf("\n");
    }
}
void  MatrixTrans_File(void)
{
    int rank=0;
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
//    printf("Please enter the rank of the matrix\n");
    fscanf(fp_in, "%d", &rank);
    int array[rank*rank];
//    printf("rank=%d\n",rank);
//    printf("Please enter the exact matrix\n");
//    printf("Please enter the rank of the matrix\n");
//    printf("Please enter the exact matrix\n");
    for(int i=0;i<rank;i++){
        for (int j=0;j<rank;j++){
//            printf("i=%d\n",i);
//            printf("j=%d\n",j);
//            printf("i*rank+j=%d\n",i*rank+j);
            fscanf(fp_in, "%d", &array[i * rank + j]);//how can i use the pointer rather than array
        }
    }
    for(int i=0;i<rank;i++){
        for (int j=0;j<rank;j++){
            printf("%d ",array[i*rank+j]);
        }
        printf("\n");
    }

    for(int i=0;i<rank;i++){
        for (int j=0;j<rank;j++){
            printf("%d ",array[j*rank+i]);
        }
        printf("\n");
    }
    for(int i=0;i<rank;i++){
        for (int j=0;j<rank;j++){
            fprintf(fp_out,"%d ",array[j*rank+i]);
        }
        fprintf(fp_out,"\n");
    }
}
