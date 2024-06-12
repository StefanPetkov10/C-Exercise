#ifndef ZAD4_H_INCLUDED
#define ZAD4_H_INCLUDED

void zad4(){

    char symbol;
    int height = 5;

    printf("Enter the symbol for the triangle frame: ");
    scanf("%c", &symbol);

    // Print the top part of the triangle
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == height)
                printf("%c", symbol);
            else
                printf(" ");
        }
        printf("\n");
    }

}


#endif // ZAD4_H_INCLUDED
