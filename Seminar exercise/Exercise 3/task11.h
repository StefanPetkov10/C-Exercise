#ifndef TASK11_H_INCLUDED
#define TASK11_H_INCLUDED

void task11(){

    void drawFortress(int n) {
    int middle_width = n / 2;
    int outer_width = n - middle_width;

    // Първи ред
    printf("/");
    for (int i = 0; i < middle_width; ++i) printf("^");
    printf("\\");
    for (int i = 0; i < middle_width; ++i) printf("^");
    printf("\\\n");

    // Средни редове
    for (int i = 0; i < n - 3; ++i) {
        printf("|");
        for (int j = 0; j < 2 * n - 2; ++j) printf(" ");
        printf("|\n");
    }

    // Последен ред
    printf("\\");
    for (int i = 0; i < middle_width; ++i) printf("_");
    printf("/");
    for (int i = 0; i < middle_width; ++i) printf("_");
    printf("/\n");

    }
    int n;
    // Въвеждане на размерите на крепостта
    printf("Enter the size of the fortress: ");
    scanf("%d", &n);

    // Генериране на крепост за дадените размери
    drawFortress(n);
}


#endif // TASK11_H_INCLUDED
