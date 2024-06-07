#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED

void task2(){

struct Vehicle {
    char name[50];
    char fuel_type[20];
    float avg_consumption;
    int max_speed;
};

struct Transportation {
    char vehicle_type[20];
    int max_weight;
    struct Vehicle vehicle;
};

void print_vehicle_data(struct Transportation *transports, int num_transports) {
    printf("---------------------------------------------------------------------------\n");
    printf("%-15s %-15s %-15s %-15s %-15s\n", "Vehicle Type", "Name", "Fuel Type", "Avg Consumption", "Max Speed");
    printf("---------------------------------------------------------------------------\n");
    for (int i = 0; i < num_transports; i++) {
        printf("%-15s %-15s %-15s %-15.2f %-15d\n", transports[i].vehicle_type, transports[i].vehicle.name, transports[i].vehicle.fuel_type, transports[i].vehicle.avg_consumption, transports[i].vehicle.max_speed);
        printf("---------------------------------------------------------------------------\n");
    }
}

struct Transportation transports[] = {
        {"Car", 1500, {"Toyota", "Petrol", 8, 180}},
        {"Motorcycle", 300, {"Honda", "Gas", 5, 200}},
        {"Boat", 2000, {"Speedboat", "Diesel", 50, 100}},
        {"Airplane", 200000, {"Boeing 747", "Jet fuel", 15, 900}}
    };

    int num_transports = sizeof(transports) / sizeof(transports[0]);

    print_vehicle_data(transports, num_transports);
}


#endif // TASK2_H_INCLUDED
