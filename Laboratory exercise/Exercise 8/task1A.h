#ifndef TASK1A_H_INCLUDED
#define TASK1A_H_INCLUDED

void task1A(){

 FILE *fp;
    int num, count, i;

    fp = fopen("numbers.bin", "wb");
    if (fp == NULL) {
        printf("Error.\n");
        return 1;
    }

    printf("Enter a count of numbers: ");
    scanf("%d", &count);

/**<
 &count − This is the pointer to the array of elements to be written.

sizeof(int) − This is the size in bytes of each element to be written.

1 − This is the number of elements, each one with a size of size bytes.

fp − This is the pointer to a FILE object that specifies an output stream.
*/
    fwrite(&count, sizeof(int), 1, fp);

    printf("Enter a number:\n");
    for (i = 0; i < count; i++) {
        scanf("%d", &num);
        fwrite(&num, sizeof(int), 1, fp);
    }

    fclose(fp);
}

#endif // TASK1A_H_INCLUDED
