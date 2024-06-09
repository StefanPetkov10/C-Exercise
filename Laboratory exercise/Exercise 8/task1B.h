#ifndef TASK1B_H_INCLUDED
#define TASK1B_H_INCLUDED

void task1B(){

 FILE *fp;
    int num, count, i, digit, even_count = 0, odd_count = 0;

    fp = fopen("numbers.bin", "rb");
    if (fp == NULL) {
        printf("Error.\n");
        return 1;
    }

    fread(&count, sizeof(int), 1, fp);

    for (i = 0; i < count; i++) {
        fread(&num, sizeof(int), 1, fp);
        while (num != 0) {
            digit = num % 10;
            if (digit % 2 == 0)
                even_count++;
            else
                odd_count++;
            num /= 10;
        }
    }

    printf("Count of even numbers: %d\n", even_count);
    printf("Count of odd numbers: %d\n", odd_count);

    fclose(fp);

}

#endif // TASK1B_H_INCLUDED
