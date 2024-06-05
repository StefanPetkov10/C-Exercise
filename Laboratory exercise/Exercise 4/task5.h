#ifndef TASK5_H_INCLUDED
#define TASK5_H_INCLUDED

void task5(){

int count(char *str) {
    int count = 0;

    while (*str != '\0') {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

    char *my_string = "Hello";
    int length = count(my_string);
    printf("The number of vowels: %d\n", length);

}

#endif // TASK5_H_INCLUDED
