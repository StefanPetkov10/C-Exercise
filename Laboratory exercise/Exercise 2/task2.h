#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED


void task2(){

int num1 = 10, num2 = 5;
    int sum, diff, product;
    float quotient;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;
    diff = *ptr1 - *ptr2;
    product = *ptr1 * *ptr2;
    quotient = (float)(*ptr1) / *ptr2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
}

#endif // TASK2_H_INCLUDED
