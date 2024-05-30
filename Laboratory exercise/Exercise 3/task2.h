#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED

void task2(){

 int numbers[7];
    int i, biggest = -1;

    for (i = 0; i < 7; i++) {
        printf("Enter %d number from range [-5000, 5000]: ", i + 1);
        scanf("%d", &numbers[i]);
        while (numbers[i] < -5000 || numbers[i] > 5000) {
            printf("Wrong number. Try again: ");
            scanf("%d", &numbers[i]);
        }
        if(numbers[i] > biggest)
        {
            biggest = numbers[i];
        }

    }

    printf("The biggest is: %d\n", biggest);

}



#endif // TASK2_H_INCLUDED
