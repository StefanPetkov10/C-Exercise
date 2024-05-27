#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED

void task2(){

 int hours, minutes, seconds;

    printf("enter a hours ");
    scanf("%d", &hours);
    printf("enter a minutes ");
    scanf("%d", &minutes);
    printf("enter a seconds ");
    scanf("%d", &seconds);

    for(minutes >= minutes + 1; seconds++;)
    {
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

#endif // TASK2_H_INCLUDED
