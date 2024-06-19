#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED
#include <string.h>

struct Product {
    char name[50];
    float price;
    int id;
    int available;
};

struct Order {
    char address[100];
    int product_id;
};

void add_product(struct Product products[], int *product_count, char name[], float price, int id) {
    strcpy(products[*product_count].name, name);
    products[*product_count].price = price;
    products[*product_count].id = id;
    products[*product_count].available = 1;
    (*product_count)++;
}

void process_order(struct Product products[], struct Order orders[], int *order_count, int *product_count) {
    for (int i = 0; i < *product_count; i++) {
        if (products[i].id == orders[*order_count].product_id && products[i].available) {
            printf("Client %s ordered %s\n", orders[*order_count].address, products[i].name);
            products[i].available = 0;
            (*order_count)++;
            return;
        }
    }
}

void task2() {
    struct Product products[100];
    struct Order orders[100];
    int product_count = 0;
    int order_count = 0;

    char command[10];
    while (1) {
        scanf("%s", command);
        if (strcmp(command, "END") == 0) {
            break;
        } else if (strcmp(command, "Product") == 0) {
            char name[50];
            float price;
            int id;
            scanf("%s%f%d", name, &price, &id);
            add_product(products, &product_count, name, price, id);
            process_order(products, orders, &order_count, &product_count);
        } else if (strcmp(command, "Order") == 0) {
            char address[100];
            int product_id;
            scanf("%s%d", address, &product_id);
            strcpy(orders[order_count].address, address);
            orders[order_count].product_id = product_id;
            process_order(products, orders, &order_count, &product_count);
        }
    }
}

#endif // TASK2_H_INCLUDED
