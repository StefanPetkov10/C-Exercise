#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED

void task3(){

int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3)
        printf("yes\n");
    else
        printf("no\n");

    return 0;

}

#endif // TASK3_H_INCLUDED
