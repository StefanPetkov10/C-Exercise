#ifndef ZAD11_H_INCLUDED
#define ZAD11_H_INCLUDED


int calculateArea(int x1, int y1, int x2, int y2) {
    int width = abs(x1 - x2);
    int height = abs(y1 - y2);

    return width * height;
}

void zad11(){

    int x1, y1, x2, y2;

    printf("Enter the coordinates of point A (x, y): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of point B (x, y): ");
    scanf("%d %d", &x2, &y2);

    int area = calculateArea(x1, y1, x2, y2);

    printf("The area of the rectangle is: %d\n", area);

}

#endif // ZAD11_H_INCLUDED
