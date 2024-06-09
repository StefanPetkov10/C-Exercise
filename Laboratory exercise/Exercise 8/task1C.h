#ifndef TASK1C_H_INCLUDED
#define TASK1C_H_INCLUDED

void task1C(){

FILE *in_fp, *out_fp;
    int num, count = 0;
    int *arr = NULL;

    in_fp = fopen("numbers.bin", "rb");
    if (in_fp == NULL) {
        printf("Error opening the file for reading.\n");
        return 1;
    }

    while (fread(&num, sizeof(int), 1, in_fp) == 1) {
        arr = (int *)realloc(arr, (count + 1) * sizeof(int));
        arr[count++] = num;
    }

    fclose(in_fp);

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    out_fp = fopen("sorted_numbers.txt", "w");
    if (out_fp == NULL) {
        printf("Error opening the text file for writing.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        fprintf(out_fp, "%d\n", arr[i]);
    }

    fclose(out_fp);
    free(arr);
}

#endif // TASK1C_H_INCLUDED
