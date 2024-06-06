#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED
#define MAX_SIZE 100

void task3() {

void transposeMatrix(int matrix[][MAX_SIZE], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void printMatrix(int matrix[][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

    int n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter elements in matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    /**<
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
     */



    printf("Original matrix:\n");
    printMatrix(matrix, n);

    printf("Transposed matrix:\n");
    transposeMatrix(matrix, n);
    printMatrix(matrix, n);

     printf("Transposed matrix:\n");
    transposeMatrix(matrix, n);
    printMatrix(matrix, n);

}

#endif // TASK3_H_INCLUDED
