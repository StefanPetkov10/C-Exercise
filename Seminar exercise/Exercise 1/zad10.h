#ifndef ZAD10_H_INCLUDED
#define ZAD10_H_INCLUDED

void zad10() {

    double angle_degrees;

    printf("Enter angle in degrees: ");
    scanf("%lf", &angle_degrees);

    double angle_radians = angle_degrees * M_PI / 180.0;

    double sine = sin(angle_radians);
    double cosine = cos(angle_radians);
    double tangent = tan(angle_radians);
    double cotangent = 1.0 / tan(angle_radians);

    printf("Sine of the angle: %lf\n", sine);
    printf("Cosine of the angle: %lf\n", cosine);
    printf("Tangent of the angle: %lf\n", tangent);
    printf("Cotangent of the angle: %lf\n", cotangent);

}

#endif // ZAD10_H_INCLUDED
