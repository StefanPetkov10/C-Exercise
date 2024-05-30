#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED

void task3(){

 int numbers[7];
    int i,total_sum = 0;

    float average = 0;
    for (i = 0; i < 7; i++) {
        printf("Enter %d number from range [-5000, 5000]: ", i + 1);
        scanf("%d", &numbers[i]);
        while (numbers[i] < -5000 || numbers[i] > 5000) {
            printf("Wrong number. Try again: ");
            scanf("%d", &numbers[i]);
        }
        total_sum += numbers[i];
    }
    average = total_sum/7;

    printf("The average is: %f\n", average);

}

#endif // TASK3_H_INCLUDED
