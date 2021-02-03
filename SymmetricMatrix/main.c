#include <stdio.h>

int main() {
    int dimension;
    while (scanf("%d",&dimension)!=EOF){
        int matrix[dimension][dimension];
        for (int i = 0; i < dimension; ++i) {
            for (int j = 0; j < dimension; ++j) {
                scanf("%d",&matrix[i][j]);
            }
        }
//        for (int i = 0; i < dimension; ++i) {
//            for (int j = 0; j < dimension; ++j) {
//                printf("%d ",matrix[i][j]);
//            }
//            printf("\n");
//        }
        int IsSymmetric=1;
        for (int i = 0; i < dimension; ++i) {
            for (int j = 0; j < dimension; ++j) {
                if (matrix[i][j]!=matrix[j][i]){
                    IsSymmetric=0;
                }
            }
        }
        if (IsSymmetric){
            printf("Yes!\n");
        } else{
            printf("No!\n");
        }
    }
    return 0;
}
