#ifndef TASK6_H_INCLUDED
#define TASK6_H_INCLUDED

void task6(){

double x1, y1, x2, y2, x, y;

    printf("Enter coordinates of the rectangle (x1, y1, x2, y2): ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("Enter coordinates of the point (x, y): ");
    scanf("%lf %lf", &x, &y);

    if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
        printf("Inside\n");
    else
        printf("Outside\n");

    return 0;

}

#endif // TASK6_H_INCLUDED
