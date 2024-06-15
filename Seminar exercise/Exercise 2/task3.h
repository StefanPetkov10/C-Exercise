#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED

void task3(){

   int n;
    printf("Enter the number of elements in the sequence: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the sequence:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int start = 0, end = n - 1; start < end; start++, end--) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


#endif // TASK3_H_INCLUDED
