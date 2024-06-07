#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED

void task1(){

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




    int new_size;
    printf("Enter new size: ");
    scanf("%d", &new_size);

    x = (int *)realloc(x, new_size * sizeof(int));

    if (x == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Address returned by realloc: %p\n", (void *)x);

    if (x == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Elements of the array after realloc:\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    free(x);

}


#endif // TASK1_H_INCLUDED
