#ifndef TASK4_H_INCLUDED
#define TASK4_H_INCLUDED

void task4(){

int compare_strings(char *s1, char *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2) {
            return printf("Strings are different.\n");
        }
        s1++;
        s2++;
    }
    if (*s1 == '\0' && *s2 == '\0') {
        return printf("Strings are same.\n");
    } else {
       return printf("Strings are different.\n");
    }
}

    char string1[] = "Hello";
    char string2[] = "Helo";

    compare_strings(string1, string2);


}

#endif // TASK4_H_INCLUDED
