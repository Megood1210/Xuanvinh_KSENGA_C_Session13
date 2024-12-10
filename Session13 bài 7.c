#include <stdio.h>
void makeMaTran(int rows, int cols, int matrix[rows][cols]) {
    printf("Nhap cac gia tri cho ma tran %dx%d: \n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap gia tri cho phan tu ma tran [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMaTran(int rows, int cols, int matrix[rows][cols]) {
    printf("Ma tran da nhap la:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    makeMaTran(rows, cols, matrix);
    printMaTran(rows, cols, matrix);

    return 0;
}

