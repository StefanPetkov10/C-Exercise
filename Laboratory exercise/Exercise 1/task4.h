#ifndef TASK4_H_INCLUDED
#define TASK4_H_INCLUDED

void task4(){

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
    int newHours, newMinutes, newSeconds;

 int addSomething =0;
 char add = 0;

    printf("enter h, H, m, M, s, S ");

    scanf(" %c", &add);

    switch(add){

     case 'h': case 'H':
        printf("Add hours ");
        scanf("%d", addSomething);
        newHours = hours + addSomething;
        printf("%02d:%02d:%02d\n", newHours, minutes, seconds);

    case 'm': case 'M':
        printf("Add minutes ");
        scanf("%d", addSomething);
        newMinutes = minutes + addSomething;
        printf("%02d:%02d:%02d\n", hours, newMinutes, seconds);

    case 's': case 'S':
        printf("Add seconds ");
        scanf("%d", addSomething);
        newSeconds = seconds + addSomething;
        printf("%02d:%02d:%02d\n", hours, minutes, newSeconds);
    }
}

#endif // TASK4_H_INCLUDED
