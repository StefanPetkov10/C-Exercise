#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED

void task1(){

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

    int num, maximum = INT_MIN, minimum = INT_MAX;

    printf("Enter numbers (enter 0 to stop):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0)
            break;

        maximum = max(maximum, num);
        minimum = min(minimum, num);
    }

    printf("Maximum entered number: %d\n", maximum);
    printf("Minimum entered number: %d\n", minimum);


}


#endif // TASK1_H_INCLUDED
