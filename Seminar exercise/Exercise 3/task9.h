#ifndef TASK9_H_INCLUDED
#define TASK9_H_INCLUDED

void task9(){

double X, Y, Z;
    printf("Enter the area of the vineyard (square meters): ");
    scanf("%lf", &X);
    printf("Enter the yield per square meter (kilograms): ");
    scanf("%lf", &Y);
    printf("Enter the desired quantity of wine (liters): ");
    scanf("%lf", &Z);

    double total_grapes = X * Y;
    double wine_produced = (total_grapes * 0.40) / 2.5;

    printf("Total wine produced: %.2lf liters\n", wine_produced);

    if (wine_produced >= Z) {
        printf("The produced quantity is sufficient.\n");
        double surplus = (wine_produced - Z) / 2;
        printf("Each worker will receive %.2lf liters surplus.\n", surplus);
    } else {
        printf("The produced quantity is not sufficient.\n");
    }
}

#endif // TASK9_H_INCLUDED
