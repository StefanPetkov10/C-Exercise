#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED
#include <string.h>


struct Car {
    char brand[20];
    char model[6];
    float engine_volume;
    float price;
    char registration;
};

void write_binary_file(struct Car car) {
    FILE *file = fopen("cars.bin", "ab");
    if (file == NULL) {
        printf("Error opening binary file!\n");
        return;
    }
    fwrite(&car, sizeof(struct Car), 1, file);
    fclose(file);
}

void write_text_file(struct Car car) {
    FILE *file = fopen("cars.txt", "a");
    if (file == NULL) {
        printf("Error opening text file!\n");
        return;
    }
    fprintf(file, "%s %s %.2f %.2f %c\n", car.brand, car.model, car.engine_volume, car.price, car.registration);
    fclose(file);
}

void add_record() {
    struct Car car;
    printf("Car brand: ");
    scanf("%s", car.brand);
    printf("Car model (5 characters): ");
    scanf("%s", car.model);
    printf("Engine volume: ");
    scanf("%f", &car.engine_volume);
    printf("Price: ");
    scanf("%f", &car.price);
    printf("Registration (Y/N): ");
    scanf(" %c", &car.registration);

    write_binary_file(car);
    write_text_file(car);
}

void read_files() {
    struct Car car;
    FILE *binary_file = fopen("cars.bin", "rb");
    FILE *text_file = fopen("cars.txt", "r");

    printf("Data from binary file:\n");
    while (fread(&car, sizeof(struct Car), 1, binary_file)) {
        printf("%s %s %.2f %.2f %c\n", car.brand, car.model, car.engine_volume, car.price, car.registration);
    }

    printf("\nData from text file:\n");
    while (fscanf(text_file, "%s %s %f %f %c", car.brand, car.model, &car.engine_volume, &car.price, &car.registration) != EOF) {
        printf("%s %s %.2f %.2f %c\n", car.brand, car.model, car.engine_volume, car.price, car.registration);
    }

    fclose(binary_file);
    fclose(text_file);
}

void task3() {
    struct Car car1 = {"BMW", "X5", 3.0, 55000.0, 'Y'};
    struct Car car2 = {"Toyota", "Camry", 2.5, 35000.0, 'N'};
    struct Car car3 = {"Mercedes", "C200", 2.0, 48000.0, 'Y'};

    write_binary_file(car1);
    write_binary_file(car2);
    write_binary_file(car3);

    write_text_file(car1);
    write_text_file(car2);
    write_text_file(car3);

    read_files();
}


#endif // TASK3_H_INCLUDED
