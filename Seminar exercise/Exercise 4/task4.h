#ifndef TASK4_H_INCLUDED
#define TASK4_H_INCLUDED


#define MAX_ELEMENTS 1000000


int elements[MAX_ELEMENTS];
int num_elements = 0;

void add(int x) {
    elements[num_elements] = x;
    num_elements++;
}

void remove_element(int x) {
    for(int i = 0; i < num_elements; i++) {
        elements[i] = elements[i + 1];
    }

    num_elements--;
}

int smallest(int x) {
    int min = elements[0];
    for (int i = 0; i < num_elements; i++) {
        if(elements[i] < min) {
            min = elements[i];
        }
    }
}
void task4(){

    add(5);
    add(3);
    add(7);
    add(5);

    printf("Added.\n");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", elements[i]);
    }
    printf("\n");

    remove_element(5);
    printf("Deleted.\n");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", elements[i]);
    }
    printf("\n");

    printf("Smallest.");
    printf("%d\n", smallest(2));
}



#endif // TASK4_H_INCLUDED
