#ifndef TASK5_H_INCLUDED
#define TASK5_H_INCLUDED


int countDigits() {
    int number, count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

void task5() {
    char choice;
    do {
        int digits = countDigits();
        printf("The number has %d digits.\n", digits);
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
}
#endif // TASK5_H_INCLUDED
