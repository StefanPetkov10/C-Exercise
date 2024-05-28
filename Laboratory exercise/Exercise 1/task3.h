#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED

void task3(){

int hours, minutes, seconds;

    printf("enter a hours ");
    scanf("%d", &hours);
    if (hours > 23 || hours < 0)
    {
        printf("wrong, try again n");
        scanf("%d", &hours);
    }
    printf("enter a minutes ");
    scanf("%d", &minutes);
    if (hours > 59 || hours < 0)
    {
        printf("wrong, try again n");
        scanf("%d", &minutes);
    }
    printf("enter a seconds ");
    scanf("%d", &seconds);
    if (hours > 59 || hours < 0)
    {
        printf("wrong, try again n");
        scanf("%d", &seconds);
    }


    while(minutes != minutes + 1)
    {
         seconds++;
         printf("%02d:%02d:%02d\n", hours, minutes, seconds);
        if(seconds == 59)
        {
             seconds = 0;
             minutes++;
             if (minutes == 60)
             {
                 minutes = 0;
                 hours++;
                 printf("%02d:%02d:%02d\n", hours, minutes, seconds);
                 break;
             }
             printf("%02d:%02d:%02d\n", hours, minutes, seconds);
             break;
        }

    }

}


#endif // TASK3_H_INCLUDED
