#ifndef TASK10_H_INCLUDED
#define TASK10_H_INCLUDED

void task10(){

 int n, number, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    printf("Enter the count of numbers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number < 200) {
            p1++;
        } else if (number < 400) {
            p2++;
        } else if (number < 600) {
            p3++;
        } else if (number < 800) {
            p4++;
        } else {
            p5++;
        }
    }

    double percentage_p1 = (double)p1 / n * 100;
    double percentage_p2 = (double)p2 / n * 100;
    double percentage_p3 = (double)p3 / n * 100;
    double percentage_p4 = (double)p4 / n * 100;
    double percentage_p5 = (double)p5 / n * 100;

    printf("Percentage of numbers below 200: %.2lf%%\n", percentage_p1);
    printf("Percentage of numbers between 200 and 399: %.2lf%%\n", percentage_p2);
    printf("Percentage of numbers between 400 and 599: %.2lf%%\n", percentage_p3);
    printf("Percentage of numbers between 600 and 799: %.2lf%%\n", percentage_p4);
    printf("Percentage of numbers 800 and above: %.2lf%%\n", percentage_p5);

}

#endif // TASK10_H_INCLUDED
