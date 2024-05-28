#ifndef TASK1_2_H_INCLUDED
#define TASK1_2_H_INCLUDED


void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void task1.2(){

 int number;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    decimalToBinary(number);
}

#endif // TASK1_2_H_INCLUDED
