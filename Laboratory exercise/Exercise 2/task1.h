#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED
#define PI 3.14159

float calculateSquareArea(float side) {
    return side * side;
}

float calculateRectangleArea(float length, float width) {
    return length * width;
}

float calculateCircleArea(float radius) {
    return PI * radius * radius;
}

float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

void task1(){

int choice;
    float side, length, width, radius, base, height, area;

    printf("Select the type of geometric figure:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    printf("4. Triangle\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = calculateSquareArea(side);
            printf("The area of the square is: %.2f\n", area);
            break;
        case 2:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = calculateRectangleArea(length, width);
            printf("The area of the rectangle is: %.2f\n", area);
            break;
        case 3:
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = calculateTriangleArea(base, height);
            printf("The area of the triangle is: %.2f\n", area);
            break;
        case 4:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = calculateCircleArea(radius);
            printf("The area of the circle is: %.2f\n", area);
            break;
        default:
            printf("Invalid choice.\n");
    }
}

#endif // TASK1_H_INCLUDED
