#ifndef TASK2A_H_INCLUDED
#define TASK2A_H_INCLUDED

void task2A(){

FILE *fp;
    int num, count, i;

    fp = fopen("numbers2.bin", "wb");
    if (fp == NULL) {
        printf("Error.\n");
        return 1;
    }


/**<
 &count − This is the pointer to the array of elements to be written.

sizeof(int) − This is the size in bytes of each element to be written.

1 − This is the number of elements, each one with a size of size bytes.

fp − This is the pointer to a FILE object that specifies an output stream.
*/
    fwrite(&count, sizeof(int), 1, fp);

    printf("Enter numbers (for end Enter 0):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        fwrite(&num, sizeof(int), 1, fp);
        count++;
    }
    fclose(fp);
}



#endif // TASK2A_H_INCLUDED
