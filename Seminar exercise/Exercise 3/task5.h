#ifndef TASK5_H_INCLUDED
#define TASK5_H_INCLUDED

int promptForTime(int runnerNumber) {
    int time;
    printf("Enter time for runner %d (seconds): ", runnerNumber);
    scanf("%d", &time);
    return time;
}

void task5() {
    int runner1, runner2, runner3;
    int total_seconds, minutes, seconds;

    // Prompt user for each runner's time
    runner1 = promptForTime(1);
    runner2 = promptForTime(2);
    runner3 = promptForTime(3);

    // Check if all inputs are within the range of 1 to 50
    if (runner1 < 1 || runner1 > 50 || runner2 < 1 || runner2 > 50 || runner3 < 1 || runner3 > 50) {
        printf("Error: All times must be between 1 and 50 seconds.\n");
        // Reprompt for times
        runner1 = promptForTime(1);
        runner2 = promptForTime(2);
        runner3 = promptForTime(3);
    }

    total_seconds = runner1 + runner2 + runner3;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("Total time: %d:%02d\n", minutes, seconds);
}

#endif // TASK5_H_INCLUDED
