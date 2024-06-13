#ifndef ZAD13_H_INCLUDED
#define ZAD13_H_INCLUDED

void zad13() {
    double w, h;
    scanf("%lf %lf", &w, &h);

    double area_cm2 = w * 100 * h * 100;
    double desk_area_cm2 = 70 * 120;
    double corridor_area_cm2 = 100 * h * 100;
    double entrance_area_cm2 = 70 * 100;
    double podium_area_cm2 = 2 * 70 * 120;

    double usable_area_cm2 = area_cm2 - corridor_area_cm2 - entrance_area_cm2 - podium_area_cm2;

    int workstations = usable_area_cm2 / desk_area_cm2;

    printf("%d\n", workstations);

}

#endif // ZAD13_H_INCLUDED
