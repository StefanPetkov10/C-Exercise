#ifndef TASK5_H_INCLUDED
#define TASK5_H_INCLUDED

void task5() {

    void calculateCoordinates(int x[]) {
        for (int t = 0; t <= 5; ++t) {
            x[t] = 20 * t - t * t;
        }
    }

    int* velocity(int x[]) {
        static int dx[5];
        for (int i = 0; i < 5; ++i) {
            dx[i] = x[i + 1] - x[i];
        }
        return dx;
    }

        int x[6];
        calculateCoordinates(x);

        int* p;
        p = velocity(x);

        for (int i = 0; i < 5; ++i) {
            printf("%d - %d\n",i ,  p[i]);
        }
        printf("\n");


}

#endif // TASK5_H_INCLUDED
