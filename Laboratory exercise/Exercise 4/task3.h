#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED
#include <ctype.h>

#define NUM_LETTERS 26

void task3(){

void count_letters(char *s, int *counts) {
    while (*s) {
        if (isalpha(*s)) {
            char letter = tolower(*s);
            counts[letter - 'a']++;
        }
        s++;
    }
}

    char string[] = "This is a sample string.";
    int letter_counts[NUM_LETTERS] = {0};

    count_letters(string, letter_counts);

    printf("Letter counts:\n");
    for (int i = 0; i < NUM_LETTERS; i++) {
        printf("%c: %d\n", 'a' + i, letter_counts[i]);
    }

}


#endif // TASK3_H_INCLUDED
