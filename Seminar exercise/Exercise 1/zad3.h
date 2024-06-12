#ifndef ZAD3_H_INCLUDED
#define ZAD3_H_INCLUDED

void zad3(){

    char symbol;
    int width = 10;
    int height = 5;

    printf("symbol: ");
    scanf("%c", &symbol);

    for (int i = 0; i < width; i++) {
        printf("%c", symbol);
    }
    printf("\n");

    for (int i = 0; i < height - 2; i++) {
        printf("%c", symbol);
        for (int j = 0; j < width - 2; j++) {
            printf(" ");
        }
        printf("%c\n", symbol);
    }

    for (int i = 0; i < width; i++) {
        printf("%c", symbol);
    }
    printf("\n");

}



#endif // ZAD3_H_INCLUDED
