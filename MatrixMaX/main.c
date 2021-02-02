#include <stdio.h>
void MatrixMax(void);
int main() {
    MatrixMax();
    return 0;
}
void MatrixMax(void){
//    FILE *fp_in;
//    fp_in=fopen("../data.txt","r");
//    if (fp_in==NULL){
//        printf("can't open the file");
//    }
    int row,col;
    while (scanf("%d %d",&row,&col)!=EOF){
        int matrix[row][col];
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                scanf("%d",&matrix[i][j]);
            }
        }
//        for (int i = 0; i < row; ++i) {
//            for (int j = 0; j < col; ++j) {
//                printf("%d ",matrix[i][j]);
//            }
//            printf("\n");
//        }
        for (int i = 0; i < row; ++i) {
            int max=matrix[i][0];
            int place=0;
            int sum=0;
            for (int j = 0; j < col; ++j) {
                if (matrix[i][j]>max){
                    max=matrix[i][j];
                    place=j;
                }
                sum=sum+matrix[i][j];
            }
            matrix[i][place]=sum;
        }
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                printf("%d ",matrix[i][j]);
            }
            printf("\n");
        }
    }
}
