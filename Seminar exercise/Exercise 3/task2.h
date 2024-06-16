#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED

void task2(){

int hour, minutes;

    printf("Enter the hour (0-23): ");
    scanf("%d", &hour);
    printf("Enter the minutes (0-59): ");
    scanf("%d", &minutes);

    int new_hour = (hour + (minutes + 15) / 60) % 24;
    int new_minutes = (minutes + 15) % 60;

    printf("The time after 15 minutes will be: %02d:%02d\n", new_hour, new_minutes);

}

#endif // TASK2_H_INCLUDED
