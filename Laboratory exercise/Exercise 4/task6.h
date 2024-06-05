#ifndef TASK6_H_INCLUDED
#define TASK6_H_INCLUDED
#include <ctype.h>

void task6(){

void convert_to_upper(char *s) {
    while (*s) {
        if (islower(*s)) {
            *s = toupper(*s);
        }
        s++;
    }
}

    char string[] = "This is a Sample String.";

    printf("Before: %s\n", string);
    convert_to_upper(string);
    printf("After: %s\n", string);

}

#endif // TASK6_H_INCLUDED
