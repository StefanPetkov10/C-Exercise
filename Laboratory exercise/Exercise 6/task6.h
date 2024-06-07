#ifndef TASK6_H_INCLUDED
#define TASK6_H_INCLUDED

void task6(){

void removeRecovered(int *array, int size, int *recovered, int numRecovered) {
    for (int i = 0; i < numRecovered; i++) {
        for (int j = 0; j < size; j++) {
            if (array[j] == recovered[i]) {
                array[j] = 0;
                break;
            }
        }
    }
}

void removeZeros(int *array, int size) {
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] != 0) {
            array[index++] = array[i];
        }
    }
    for (int i = index; i < size; i++) {
        array[i] = 0;
    }
}

void sortArray(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

    int initialSize = 7;
    int *infected = (int*)malloc(initialSize * sizeof(int));

    if (infected == NULL) {
        printf("Error allocating memory.\n");
        return 1;
    }

    for (int i = 0; i < initialSize; i++) {
        infected[i] = i + 1;
    }

    int numNewInfected, numRecovered;
    printf("Enter the number of newly infected individuals: ");
    scanf("%d", &numNewInfected);
    printf("Enter the number of recovered individuals: ");
    scanf("%d", &numRecovered);

    int *recovered = (int*)malloc(numRecovered * sizeof(int));

    if (recovered == NULL) {
        printf("Error allocating memory.\n");
        free(infected);
        return 1;
    }

    printf("Enter the numbers of recovered individuals: ");
    for (int i = 0; i < numRecovered; i++) {
        scanf("%d", &recovered[i]);
    }

    printf("Newly infected individuals: ");
    for (int i = 0; i < numNewInfected; i++) {
        printf("%d ", infected[i]);
    }
    printf("\n");

    printf("Recovered individuals: ");
    for (int i = 0; i < numRecovered; i++) {
        printf("%d ", recovered[i]);
    }
    printf("\n");

    removeRecovered(infected, initialSize, recovered, numRecovered);

    printf("Array before sorting: ");
    for (int i = 0; i < initialSize; i++) {
        printf("%d ", infected[i]);
    }
    printf("\n");

    removeZeros(infected, initialSize);

    sortArray(infected, initialSize - numRecovered);

    printf("Sorted array: ");
    for (int i = 0; i < initialSize - numRecovered; i++) {
        printf("%d ", infected[i]);
    }
    printf("\n");

    free(infected);
    free(recovered);


}

#endif // TASK6_H_INCLUDED
