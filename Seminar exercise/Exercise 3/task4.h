#ifndef TASK4_H_INCLUDED
#define TASK4_H_INCLUDED

void task4(){

int points, bonus = 0;

    printf("Enter the number of points: ");
    scanf("%d", &points);

    if (points <= 100)
        bonus = 5;
    else if (points > 100 && points <= 1000)
        bonus = points * 0.20;
    else
        bonus = points * 0.10;

    if (points % 2 == 0)
        bonus += 1;
    if (points % 10 == 5)
        bonus += 2;

    int total_points = points + bonus;

    printf("Bonus points: %d\n", bonus);
    printf("Total points with bonus: %d\n", total_points);

}

#endif // TASK4_H_INCLUDED
