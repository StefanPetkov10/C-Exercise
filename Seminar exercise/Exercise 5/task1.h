#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED
#include <string.h>

    struct Item {
    char name[10];
    float price;
    int quantity;
    };

int calculate_needed_items(int guests, int current, int per_table) {
    if (guests < current * per_table)
    {
        return guests / per_table - current;
    }
    else
        return guests / per_table + 1 - current;
}

void task1(){
    struct Item items[] = {
        {"Chair", 13.99, 0},
        {"Table", 42.00, 0},
        {"Cups", 5.98, 0},
        {"Dishes", 21.02, 0}
    };

    int guests;
    scanf("%d", &guests);

    float total_cost = 0.0;

    char item_name[10];
    while (scanf("%s", item_name) == 1) {
        if (strcmp(item_name, "PARTY!") == 0) {
            break;
        }
        for (int i = 0; i < 4; i++) {
            if (strcmp(item_name, items[i].name) == 0) {
                total_cost += items[i].price;
                items[i].quantity++;
                break;
            }
        }
    }

    int needed_chairs = guests - items[0].quantity;
    int needed_tables = calculate_needed_items(guests, items[1].quantity, 8);
    int needed_cups = calculate_needed_items(guests, items[2].quantity, 6);
    int needed_dishes = calculate_needed_items(guests, items[3].quantity, 6);

    printf("%.2f\n", total_cost);

    if (needed_chairs > 0) printf("%d %s\n", needed_chairs, items[0].name);
    if (needed_tables > 0) printf("%d %s\n", needed_tables, items[1].name);
    if (needed_cups > 0) printf("%d %s\n", needed_cups, items[2].name);
    if (needed_dishes > 0) printf("%d %s\n", needed_dishes, items[3].name);
}


#endif // TASK1_H_INCLUDED
