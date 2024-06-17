#ifndef TASK7_H_INCLUDED
#define TASK7_H_INCLUDED

void task7(){

int distance;
    char period;
    double taxi_cost, bus_cost, train_cost;

    printf("Enter the distance in kilometers: ");
    scanf("%d", &distance);
    printf("Enter the period of the day (D for day, N for night): ");
    scanf(" %c", &period);

    taxi_cost = 0.70 + (period == 'D' ? 0.79 : 0.90) * distance;
    bus_cost = 0.09 * distance;
    train_cost = 0.06 * distance;

    if (distance < 20) {
        printf("Distance is too short for bus, taking taxi.\n");
        printf("Cost of taxi: %.2lf lv.\n", taxi_cost);
    } else if (distance < 100) {
        printf("Cost of bus: %.2lf lv.\n", bus_cost);
    } else {
        printf("Cost of train: %.2lf lv.\n", train_cost);
    }

}

#endif // TASK7_H_INCLUDED
