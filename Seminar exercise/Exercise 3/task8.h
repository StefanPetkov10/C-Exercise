#ifndef TASK8_H_INCLUDED
#define TASK8_H_INCLUDED

void task8(){

double V, debit1, debit2, N;

    printf("Enter the volume of the pool: ");
    scanf("%lf", &V);
    printf("Enter the debit of the first pipe: ");
    scanf("%lf", &debit1);
    printf("Enter the debit of the second pipe: ");
    scanf("%lf", &debit2);
    printf("Enter the time in hours: ");
    scanf("%lf", &N);

    double filled_volume = (debit1 + debit2) * N;

    if (filled_volume <= V) {
        printf("The pool is filled with %.2lf liters of water.\n", filled_volume);
    } else {
        printf("The pool overflows with %.2lf liters of water.\n", filled_volume - V);
    }

}

#endif // TASK8_H_INCLUDED
