#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED


void task2(){

int max(int a, int b) {
    return (a > b) ? a : b;
}

int maxNeighborSum(int arr[100][100], int n, int m) {
    int maxSum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int currentSum = 0;

            for (int k = i - 1; k <= i + 1; k++) {
                for (int l = j - 1; l <= j + 1; l++) {
                    if (k >= 0 && k < n && l >= 0 && l < m) {
                        currentSum += arr[k][l];
                    }
                }
            }

            currentSum -= arr[i][j];

            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}


    int arr[100][100];
    int n, m;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int result = maxNeighborSum(arr, n, m);

    printf("Maximum sum of neighbors: %d\n", result);

}

#endif // TASK2_H_INCLUDED
