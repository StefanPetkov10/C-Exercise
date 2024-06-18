#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED

void task3(){

int findMinRow(int nums[][100], int rows, int cols) {
    int minRow = 0;
    int minElement = nums[0][0];
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (nums[i][j] < minElement) {
                minElement = nums[i][j];
                minRow = i;
            }
        }
    }
    return minRow;
}

int findMaxRow(int nums[][100], int rows, int cols) {
    int maxRow = 0;
    int maxElement = nums[0][0];
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (nums[i][j] > maxElement) {
                maxElement = nums[i][j];
                maxRow = i;
            }
        }
    }
    return maxRow;
}

void swapRows(int nums[][100], int row1, int row2, int cols) {
    int temp, j;
    for (j = 0; j < cols; j++) {
        temp = nums[row1][j];
        nums[row1][j] = nums[row2][j];
        nums[row2][j] = temp;
    }
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

    int minRow = findMinRow(nums, N, M);
    int maxRow = findMaxRow(nums, N, M);

    swapRows(nums, minRow, maxRow, M);

    printf("The matrix after swapping the rows with the smallest and largest elements:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }
}

#endif // TASK3_H_INCLUDED
