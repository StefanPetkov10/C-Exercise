#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED
#include <stdbool.h>

void task2(){


int count_words(char *s) {
    int count = 0;
    bool in_word = false;

    while (*s) {
        if (*s == ' ' || *s == '\t' || *s == '\n') {
            in_word = false;
        }
        else if (!in_word) {
            in_word = true;
            count++;
        }
        s++;
    }

    return count;
}


    char string[] = "Example of a string with several words.";
    printf("The number of words in the string is: %d\n", count_words(string));
}

#endif // TASK2_H_INCLUDED
