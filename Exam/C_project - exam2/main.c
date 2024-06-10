#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_PATIENTS 100

struct Animals{

    char name[30];
    char id[6];
    double price;

};

//task 1
struct Animals createAnimals(){

    struct Animals newAnimal;

    printf("Enter Owner Name: ");
    scanf("%s", newAnimal.name); // We limit the input to 30 characters to fit in the structure
    printf("Enter chip number: ");
    scanf("%s", newAnimal.id); // The format "A12345B" has 8 characters
    printf("Enter price to view: ");
    scanf("%lf", &newAnimal.price);

    FILE *file = fopen("text.txt", "a");

    if(file == NULL){
        printf("Error");
        exit(1);
    }

    fprintf(file, "%s, %.2f\n", newAnimal.name, newAnimal.price);

    fclose(file);

    return newAnimal;
}

//task 2
void printAnimalsByPrice(struct Animals animals[], int n, double price){

    bool hasAnimal = false;

    for(int i = 0; i < n; i++)
{
        if(animals[i].price == price)
        {
        printf("%s %s\n",animals[i].name, animals[i].id);
        hasAnimal = true;
        }

    }
    if(hasAnimal == false)
    {
        printf("There is no animal");
    }


}

//task 3
void printPatientsFromBinaryFile(pricePerAnimal){

    FILE *file = fopen("animalsBin.bin", "rb");

    if(file == NULL)
    {
        printf("Error");
        exit(1);
    }

    struct Animals animals;
    while(fread(&animals, sizeof(struct Animals), 1, file))
    {
        if(animals.price >= pricePerAnimal)
        {
            printf("%s\n",animals.name);
            printf("%s\n",animals.id);
            printf("%.2f\n",animals.price);
            fclose(file);
        }
    }

    fclose(file);

}

int main()
{
    struct Animals animals[MAX_PATIENTS];
    int numAnimals = 0;
    double price = 0.0;
    double pricePerAnimal = 0.0;
    char nextAnimal = 'y';

    while(1)
    {
        animals[numAnimals] = createAnimals();
        numAnimals++;

        printf("Do you want next animal? -> y oR Y\n");
        scanf(" %c", &nextAnimal);

        if(nextAnimal != 'y' && nextAnimal !='Y')
        {
            break;
        }

        if(numAnimals == MAX_PATIENTS)
        {
            break;
        }
    }

    printf("Enter a price: \n");
    scanf("%lf", &price);

    printf("------------ \n");
    printAnimalsByPrice(animals, numAnimals, price);
    printf("------------ \n");

    printf("Enter a price per animal: \n");
    scanf("%lf", &pricePerAnimal);

    printf("------------ \n");
    printPatientsFromBinaryFile(pricePerAnimal);
    printf("------------ \n");

}
