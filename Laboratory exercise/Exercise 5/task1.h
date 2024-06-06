#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED
#define MAX_SIZE 100

void task1(){

void populate_matrix(int matrix[MAX_SIZE][MAX_SIZE], int N) {
    printf("Enter elements in matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void print_matrix(int matrix[MAX_SIZE][MAX_SIZE], int N) {
    printf("Matrix is:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Функция за извеждане на елементите над главния диагонал
void print_upper_diagonal(int matrix[MAX_SIZE][MAX_SIZE], int N) {
    printf("Elements upper main diagonal: ");
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
}

// Функция за извеждане на елементите под главния диагонал
void print_lower_diagonal(int matrix[MAX_SIZE][MAX_SIZE], int N) {
    printf("Elements under main diagonal: ");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
}
// Функция за извеждане на елементите на главния диагонал
void print_main_diagonal(int matrix[MAX_SIZE][MAX_SIZE], int N) {
    printf("Elements in main diagonal: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
}

// Функция за извеждане на елементите на второстепенния диагонал
void print_secondary_diagonal(int matrix[MAX_SIZE][MAX_SIZE], int N) {
    printf("Elements for second diagonal: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][N - 1 - i]);
    }
    printf("\n");
}

    int matrix[MAX_SIZE][MAX_SIZE];
    int N;

    printf("Enter rows in matrix(NxN): ");
    scanf("%d", &N);

    populate_matrix(matrix, N);
    print_matrix(matrix, N);
    print_upper_diagonal(matrix, N);
    print_lower_diagonal(matrix, N);
    print_main_diagonal(matrix , N);
    print_secondary_diagonal(matrix, N);
    return 0;

}

#endif // TASK1_H_INCLUDED
