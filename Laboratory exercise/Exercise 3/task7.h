#ifndef TASK7_H_INCLUDED
#define TASK7_H_INCLUDED

void task7() {

int v[6];
    int t[] = {2, 12, 5, 7, 9, 10};

    srand(time(NULL));

    for (int i = 0; i < 6; i++) {
        v[i] = rand();
    }

    float sumT = 0;
    float up = 0;
    for (int i = 0; i < 6; i++) {
        up += v[i] * t[i];
        sumT += t[i];
    }

    float result = up / sumT;
    printf("Result: %.2f\n", result);

}

#endif // TASK7_H_INCLUDED
