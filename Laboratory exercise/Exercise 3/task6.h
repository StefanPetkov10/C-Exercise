#ifndef TASK6_H_INCLUDED
#define TASK6_H_INCLUDED

void task6() {

float calculateAverageTTime(float *t, int n) {
    float sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += t[i];
    }
    return sum / n;
}

float calculateStandardDeviation(float *t, int n, float mean) {
    float sum_squared_errors = 0.0;
    for (int i = 0; i < n; ++i) {
        float error = t[i] - mean;
        sum_squared_errors += error * error;
    }
    return sqrt(sum_squared_errors / (n - 1));
}


    float t[] = {41.0, 43.4, 48.8, 49.2, 50.1, 44.6, 47.3, 46.8, 43.9, 46.4};
    int n = sizeof(t) / sizeof(t[0]);

    float mean = calculateAverageTTime(t, n);
    float standard_deviation = calculateStandardDeviation(t, n, mean);

    printf("Average is: %.2f\n", mean);
    printf("standard deviation: %.2f\n", standard_deviation);

}


#endif // TASK6_H_INCLUDED
