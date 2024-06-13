#ifndef ZAD12_H_INCLUDED
#define ZAD12_H_INCLUDED

float calculateArea(int x1, int y1, int x2, int y2, int x3, int y3) {
    return abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2.0);
}

int () {
    int x1, y1, x2, y2, x3, y3;

    printf("Enter the coordinates of point 1 (x, y): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of point 2 (x, y): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter the coordinates of point 3 (x, y): ");
    scanf("%d %d", &x3, &y3);

    float area = calculateArea(x1, y1, x2, y2, x3, y3);

    printf("The area of the triangle is: %.2f\n", area);

#endif // ZAD12_H_INCLUDED
