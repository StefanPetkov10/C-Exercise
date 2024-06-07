#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED

void task1(){

struct Point {
    int x;
    int y;
    int z;
};

float distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

int is_triangle(float side1, float side2, float side3) {
    return side1 > 0 && side2 > 0 && side3 > 0 &&
           side1 + side2 > side3 &&
           side2 + side3 > side1 &&
           side3 + side1 > side2;
}

    struct Point points[3];
    float side1, side2, side3;

    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        points[i].x = rand() % 10;
        points[i].y = rand() % 10;
        points[i].z = rand() % 10;
    }

    side1 = distance(points[0], points[1]);
    side2 = distance(points[1], points[2]);
    side3 = distance(points[2], points[0]);


    printf("%f\n", round(side1));
    printf("%f\n", side2);
    printf("%f\n", side3);


    if (is_triangle(side1, side2, side3)) {
        printf("Triangle is available.\n");
    }
    else {
        printf("Triangle is not available.\n");
    }
}

#endif // TASK1_H_INCLUDED
