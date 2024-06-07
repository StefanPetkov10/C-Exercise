#ifndef TASK4_H_INCLUDED
#define TASK4_H_INCLUDED

void task4(){

    int rows = 2;
    int cols = 5;

    int **xt = (int **)malloc(rows * sizeof(int *));
    if (xt == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        xt[i] = (int *)malloc(cols * sizeof(int));
        if (xt[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    printf("Addresses returned by malloc:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%p ", (void *)&xt[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0) {
                int t = j;
                xt[i][j] = 19 - 2 * t;
            } else if (i == 1) {
                int t = j + 1;
                xt[i][j] = t;
            }
        }
    }
    printf("\nValues in the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", xt[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(xt[i]);
    }
    free(xt);

}

#endif // TASK4_H_INCLUDED
