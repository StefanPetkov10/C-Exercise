#ifndef TASK5_H_INCLUDED
#define TASK5_H_INCLUDED

void task5(){

    int rows = 3;
    int cols = 5;

    int *xt[rows];
    for (int i = 0; i < rows; i++) {
        xt[i] = (int *)malloc(cols * sizeof(int));
        if (xt[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    printf("Values in the first array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0) {
                int t = j;
                xt[i][j] = 19 - 2 * t;
            } else if (i == 1) {
                int t = j + 1;
                xt[i][j] = t;
            }
            printf("%d ", xt[i][j]);
        }
        printf("\n");
    }


    int *vtv[rows];
    for (int i = 0; i < rows; i++) {
        vtv[i] = (int *)malloc(cols * sizeof(int));
        if (vtv[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    printf("\nValues in the second array:\n");
    int suma = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i < 2) {
                vtv[i][j] = xt[i][j];
            } else if (i == 2) {
                vtv[i][j] = xt[i - 2][j] * 1;
                suma += vtv[i][j];
            }
            printf("%d ", vtv[i][j]);
        }
        printf("\n");
    }

    int average = suma / cols;
    printf("\nAverage of row 2: %d\n", average);

    for (int i = 0; i < rows; i++) {
        free(xt[i]);
        free(vtv[i]);
    }

}

#endif // TASK5_H_INCLUDED
