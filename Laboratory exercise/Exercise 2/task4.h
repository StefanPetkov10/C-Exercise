#ifndef TASK4_H_INCLUDED
#define TASK4_H_INCLUDED

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void task4(){


int num1 = 10, num2 = 20;

    swap(&num1, &num2);

    printf("After swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

}

#endif // TASK4_H_INCLUDED
