#include <stdio.h>
#include <stdlib.h>

//task 1
struct IceCream {

char code[3];
char name[21];
int weight;
double price;
};

//task 2
double totalPriceByFirstLetter(struct IceCream iceCreams[], int n, char letter) {
    double totalPrice = 0.0;

    for (int i = 0; i < n; i++) {

        if (iceCreams[i].name[0] == letter) {

            totalPrice += iceCreams[i].weight * iceCreams[i].price;
        }
    }

    return totalPrice;
}

//task 3
int addIceCreamsToFile(struct IceCream iceCreams[], int n, double priceLimit, int weightLimit) {
    int count = 0; // Брояч за записаните сладоледи

    // Отваряне на файл за записване
    FILE *file = fopen("info.txt", "a");
    if (file == NULL) {
        printf("Error.\n");
        return 1;
    }

    // Обхождане на масива от сладоледи
    for (int i = 0; i < n; i++) {
        // Проверка за цена и тегло
        if (iceCreams[i].price < priceLimit && iceCreams[i].weight > weightLimit) {
            // Записване на информацията във файла
            fprintf(file, "%s; %s; %d; %.2f leva\n", iceCreams[i].code, iceCreams[i].name, iceCreams[i].weight, iceCreams[i].price);
            count++;
        }
    }


    // Затваряне на файла
    fclose(file);

    return count;
}

//task 4
void printInfo(struct IceCream iceCreams[], int n, char code){

    FILE *file = fopen("icecream.bin", "wb");

    if(file == NULL)
    {
        printf("Error.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fwrite(&iceCreams[i], sizeof(struct IceCream), 1, file);
    }

     struct IceCream iceCream;
     while (fread(&iceCream, sizeof(struct IceCream), 1, file)) {
        if (strcmp(iceCream.code, code) == 0) {
            printf("====================\n");
            printf("IceCream %s\n", iceCream.name);
            printf("Price - %.2lf BGN\n", iceCream.price);
            printf("====================\n");
            fclose(file);
            return;
        }
    }

    printf("IceCream with code %s not found.\n", code);
    fclose(file);

}

// Генериране на случайни уникални кодове
void generateRandomCode(char *code) {
    code[0] = 'A' + rand() % 26; // Генериране на случайна главна буква
    code[1] = '1' + rand() % 10; // Генериране на случайна цифра между 1 и 9
    code[2] = '\0'; // Добавяне на терминираща нула за да се формира низ
}

// Генериране на случайни имена на продукти
void generateRandomName(char *name) {
   const char *adjectives[] = {"Vanilla", "Chocolate", "Strawberry", "Borovinkov", "Malinov", "Caramel"};
   const char *nouns[] = {"ice cream", "frappe", "sea foam", "parfait", "sorbet"};

    sprintf(name, "%s %s", adjectives[rand() % 6], nouns[rand() % 5]);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

     if (n <= 5 || n >= 15) {
        printf("Wrong\n");
        return 1;
    }

    struct IceCream *iceCreams = (struct IceCream*)malloc(n * sizeof(struct IceCream));

    if(iceCreams == NULL)
    {
        printf("Error");
        return 1;
    }

    printf("Please enter information about ice creams:\n");
    for (int i = 0; i < n; i++) {
        printf("\nIce cream %d:\n", i + 1);

        // Generate unique code
        generateRandomCode(iceCreams[i].code);
        printf("Unique code: %s\n", iceCreams[i].code);

        // Generate a random product name
        generateRandomName(iceCreams[i].name);
        printf("Product Name: %s\n", iceCreams[i].name);

        // Generate a random weight between 100 and 1000 kg
        iceCreams[i].weight = rand() % 101;
        printf("Weight in kilograms: %d\n", iceCreams[i].weight);

        // Generate a random price between 1 and 10 BGN
        iceCreams[i].price = 1 + (rand() % 100 / 10.0);
        printf("Price Per Kilo: %.2lf\n", iceCreams[i].price);
    }

    char letter;
    printf("Enter a letter: ");
    scanf(" %c", &letter);

    double total = totalPriceByFirstLetter(iceCreams, n, letter);

    if (total > 0.0) {
    printf("Total price of ice creams with name starting with letter %.2lf\n", total);
    } else {
    printf("No ice creams found with a name starting with the letter \n" );
    }



    double priceLimit;
    int weightLimit;
    printf("Enter a price: ");
    scanf("%lf", &priceLimit);
    printf("Enter a weight: ");
    scanf("%d", &weightLimit);

    int addedCount = addIceCreamsToFile(iceCreams, n, priceLimit, weightLimit);

    if (addedCount > 0) {
    printf("Successfully saved %d ice creams to file.\n", addedCount);
    } else {
    printf("No eligible ice creams were found.\n");
    }


    char code[3];
    printf("Enter a code: ");
    scanf("%s", code);

    // Извикване на функцията за показване на информация за сладолед по уникален код
    printInfo(iceCreams, n, code);


    /**<
    printf("Please use ice cream info:\n");
    for (int i = 0; i < n; i++) {
        printf("\nIce cream %d:\n", i + 1);
        printf("Unique code (eg A2): ");
        scanf("%s", iceCreams[i].code);
        printf("Product Name: ");
        scanf("%s", iceCreams[i].name);
        printf("Weight in kilograms: ");
        scanf("%d", &iceCreams[i].weight);
        printf("Price per kilo: ");
        scanf("%lf", &iceCreams[i].price);
    }
    printf("\nInformation about ice creams:\n");
    for (int i = 0; i < n; i++) {
        printf("\nIce cream %d:\n", i + 1);
        printf("Unique code: %s\n", iceCreams[i].code);
        printf("Product Name: %s\n", iceCreams[i].name);
        printf("Weight in kilograms: %d\n", iceCreams[i].weight);
        printf("Price Per Kilo: %.2lf\n", iceCreams[i].price);
    }
*/
    // Освобождаване на заделената памет
    free(iceCreams);
    return 0;

}
