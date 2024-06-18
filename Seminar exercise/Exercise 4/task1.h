#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED

void task1(){

int isRowSorted(int nums[][100], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 1; j < cols; j++) {
            if (nums[i][j] < nums[i][j - 1]) {
                return 0;
            }
        }
    }
    return 1;
}

int isColumnSorted(int nums[][100], int rows, int cols) {
    int i, j;
    for (j = 0; j < cols; j++) {
        for (i = 1; i < rows; i++) {
            if (nums[i][j] > nums[i - 1][j]) {
                return 0;
            }
        }
    }
    return 1;
}


    int N, M;
    printf("Enter the number of rows (N): ");
    scanf("%d", &N);
    printf("Enter the number of columns (M): ");
    scanf("%d", &M);

    int nums[100][100];
    int i, j;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &nums[i][j]);
        }
    }

    if (isRowSorted(nums, N, M) && isColumnSorted(nums, N, M)) {
        printf("Each row contains numbers sorted.\n");
    } else {
        printf("Rows or columns are not sorted.\n");
    }
}



#endif // TASK1_H_INCLUDED
