#ifndef ZAD9_H_INCLUDED
#define ZAD9_H_INCLUDED

void zad9(){

    double a, b, h, area;
    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    printf("Enter h: ");
    scanf("%lf", &h);

    area = (a + b) / 2 * h;

    printf("Area is %.2f", area);

}

#endif // ZAD9_H_INCLUDED
