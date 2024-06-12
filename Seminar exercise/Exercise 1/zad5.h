#ifndef ZAD5_H_INCLUDED
#define ZAD5_H_INCLUDED

void zad5() {

    double in, m, dm, sm, mm;
    printf("Enter a in: ");
    scanf("%lf", &in);

    m = in * 0.0254;
    printf("In M is: %f: \n", m);

    sm = in * 0.393701;
    printf("In SM is: %f: \n", sm);

    mm = in * 25.4;
    printf("In MM is: %f: \n", mm);

}

#endif // ZAD5_H_INCLUDED
