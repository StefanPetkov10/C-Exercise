#ifndef TASK1_1_H_INCLUDED
#define TASK1_1_H_INCLUDED

void checkEvenOrOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}


void task1.1(){

int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkEvenOrOdd(number);

    return 0;
}

#endif // TASK1_1_H_INCLUDED
