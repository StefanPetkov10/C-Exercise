#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED

void task2(){

int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *x = (int *)calloc(n, sizeof(int));
    if (x == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Address returned by calloc: %p\n", (void *)x);

    for (int t = 0; t < n; t++) {
        x[t] = 20 * t - t * t;
    }
    printf("Elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");


    for (int i = 0; i < n - 1; i++) {
        x[i] = (x[i+1] - x[i])/((i+1) - i);
    }

    printf("Elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

free(x);
}


#endif // TASK2_H_INCLUDED
