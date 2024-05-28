#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED


void changeBitwise(int *num) {
    *num ^= 1;
}

void task3() {
    int number;
    scanf("%d", &number);
    int *ptr;

    ptr = &number;

    changeBitwise(ptr);

    printf("Changed value: %d\n", number);
}

#endif // TASK3_H_INCLUDED
