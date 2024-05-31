#ifndef TASK8_H_INCLUDED
#define TASK8_H_INCLUDED

void task8() {

    int int_numbers[10];
    float float_numbers[10];
    float float_numbers_2[10];
    float float_numbers_3[10];
    int i;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        int_numbers[i] = rand() % 32768;
    }

    for (i = 0; i < 10; i++) {
        float_numbers[i] = ((float) rand() / RAND_MAX);
    }

     for (i = 0; i < 10; i++) {
        float_numbers_2[i] = ((float)rand() / RAND_MAX) * 5;
        float_numbers_3[i] = ((float)rand() / RAND_MAX) * 5 - 2;
    }

    printf("Random integer numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", int_numbers[i]);
    }
    printf("\n\n");

    printf("Random float numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", float_numbers[i]);
    }
    printf("\n\n");

    printf("Random float numbers in the range [0, 5):\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", float_numbers_2[i]);
    }
    printf("\n\n");

    printf("Random float numbers in the range [-2, 3):\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", float_numbers_3[i]);
    }
    printf("\n");

}

#endif // TASK8_H_INCLUDED
