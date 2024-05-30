
int calculateTotalSum() {
    int numbers[7];
    int i, total_sum = 0;

    for (i = 0; i < 7; i++) {
        printf("Въведете %d-то число от интервала [-5000, 5000]: ", i + 1);
        scanf("%d", &numbers[i]);
        while (numbers[i] < -5000 || numbers[i] > 5000) {
            printf("Грешно въведено число. Опитайте отново: ");
            scanf("%d", &numbers[i]);
        }
        total_sum += numbers[i];
    }

    return total_sum;
}
