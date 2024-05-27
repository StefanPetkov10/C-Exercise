#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED


void task1(){

int hours, minutes, seconds;

    printf("enter a hours ");
    scanf("%d", &hours);
    printf("enter a minutes ");
    scanf("%d", &minutes);
    printf("enter a seconds ");
    scanf("%d", &seconds);

    if (hours > 23 || hours < 0)
    {
        printf("-1\n");
    }
    else if (minutes > 59 || minutes < 0)
    {
        printf("-2\n");
    }

    else if (seconds > 59 || seconds < 0)
    {
        printf("-3\n");
    }

    char clock = 0;

    printf("enter m or n ");

    scanf(" %c", &clock);

    switch(clock){

     case 'm':

        if (hours == 0) {
        printf("12:");
        } else if (hours > 12) {
        printf("%d:", hours - 12);
        } else {
        printf("%d:", hours);
        }
        printf("%02d:%02d %s\n", minutes, seconds, (hours < 12) ? "am" : "pm");
        break;

     case 'n':

        printf("%02d:%02d:%02d\n", hours, minutes, seconds);

            if (hours == 0) {
                printf("12:");
            } else if (hours > 12) {
                printf("%d:", hours - 12);
            } else {
                printf("%d:", hours);
            }
            printf("%02d:%02d %s\n", minutes, seconds, (hours < 12) ? "am" : "pm");
            break;
    }
}

#endif // TASK1_H_INCLUDED
