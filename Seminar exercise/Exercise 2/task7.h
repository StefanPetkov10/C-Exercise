#ifndef TASK7_H_INCLUDED
#define TASK7_H_INCLUDED

void task7()
{
    int n, target;
    printf("Enter the number of elements in the sequence: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the sequence:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    for (int start = 0; start < n; ++start) {
        int sum = 0;
        for (int end = start; end < n; ++end) {
            sum += arr[end];
            if (sum == target) {
                printf("Sequence with target sum found: ");
                for (int i = start; i <= end; ++i) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
        }
    }

}

#endif // TASK7_H_INCLUDED
