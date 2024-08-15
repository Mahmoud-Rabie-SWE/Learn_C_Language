#include <stdio.h>

struct TIMEE
{
    int Seconds;
    int Minutes;
    int Hours;
};

typedef struct TIMEE TIME;
TIME CalculateTimeDuration(TIME start, TIME stop)
{
    // .e.g
    // Start = 2:30:30
    // Stop = 4:30:10
    int totalSecondsOfStart = (((start.Hours * 60) + start.Minutes) * 60) + start.Seconds;
    int totalSecondsOfStop = (((stop.Hours * 60) + stop.Minutes) * 60) + stop.Seconds;
    TIME diff;
    diff.Seconds = (totalSecondsOfStop - totalSecondsOfStart) % 60; // ==> 40
    diff.Minutes = ((totalSecondsOfStop - totalSecondsOfStart) / 60) % 60; // ==> 59
    diff.Hours = (((totalSecondsOfStop - totalSecondsOfStart) / 60) / 60) % 60; // ==> 1
    return diff;
}

int main()
{
    TIME startTime;
    TIME stopTime;

    printf("Enter Start Time [Hours:Minutes:Seconds]: ");
    scanf("%d:%d:%d", &startTime.Hours, &startTime.Minutes, &startTime.Seconds);
    printf("Enter Stop Time [Hours:Minutes:Seconds]: ");
    scanf("%d:%d:%d", &stopTime.Hours, &stopTime.Minutes, &stopTime.Seconds);

    TIME TimeDuration = CalculateTimeDuration(startTime, stopTime);

    printf("  Time Duration: %d:%d:%d \n", TimeDuration.Hours, TimeDuration.Minutes, TimeDuration.Seconds);

    return 0;
}
