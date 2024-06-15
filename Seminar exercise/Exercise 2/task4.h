#ifndef TASK4_H_INCLUDED
#define TASK4_H_INCLUDED

void task4(){

    void rotateNumbers(int arr[], int n, int k) {

    int temp;
    for (int i = 0; i < k; i++) {
        temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

}

    int n, k;
    printf("Enter the number of elements in the sequence: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the sequence:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the integer K: ");
    scanf("%d", &k);

    rotateNumbers(arr, n, k);

    printf("The modified sequence after rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

#endif // TASK4_H_INCLUDED
