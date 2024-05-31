#ifndef TASK4_H_INCLUDED
#define TASK4_H_INCLUDED

void task4(){

int numbers[7];
    int i, sum = 0;

    for (i = 0; i < 7; i++) {
        printf("Enter the %d-th number within the range [-5000, 5000]: ", i + 1);
        scanf("%d", &numbers[i]);
        while (numbers[i] < -5000 || numbers[i] > 5000) {
            printf("Incorrect number entered. Please try again: ");
            scanf("%d", &numbers[i]);
        }
        sum += numbers[i];
    }

    double average = (double)sum / 7;
    int closest_number = numbers[0];
    int first_difference = abs(numbers[0] - average);
    int closest_index = 0;

    for (i = 1; i < 7; i++) {
        int difference = abs(numbers[i] - average);
        if (first_difference > difference) {
            first_difference = difference;
            closest_number = numbers[i];
            closest_index = i;
        }
    }

    printf("Average value: %.2lf, closest value: %d at position %d.\n", average, closest_number, closest_index + 1);


}

#endif // TASK4_H_INCLUDED
