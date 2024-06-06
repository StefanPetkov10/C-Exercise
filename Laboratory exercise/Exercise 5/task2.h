#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED

void task2(){

int is_magic_square(int matrix[10][10], int N) {

    int sum = 0;
    for (int j = 0; j < N; j++) {
        sum += matrix[0][j];
    }

    for (int i = 0; i < N; i++) {
        int row_sum = 0;
        int col_sum = 0;
        for (int j = 0; j < N; j++) {
            row_sum += matrix[i][j];
            col_sum += matrix[j][i];
        }
        if (row_sum != sum || col_sum != sum) {
            return 0;
        }
    }
    return 1;
}

    int matrix[10][10];
    int N;

    printf("Enter n: ");
    scanf("%d", &N);

    printf("Enter number for matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (is_magic_square(matrix, N)) {
        printf("Matrix is magic.\n");
    } else {
        printf("Matrix is not magic.\n");
    }
}



#endif // TASK2_H_INCLUDED
