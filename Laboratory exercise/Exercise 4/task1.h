#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED

void task1(){

int find_length(char *s) {
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

    char string[] = "Hello, world!";
    printf("The length of string is: %d\n", find_length(string));

}
#endif // TASK1_H_INCLUDED
