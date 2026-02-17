#include <stdio.h>
void convertTime(int seconds) {
    int hrs, mins, secs;
    hrs = seconds / 3600;
    seconds = seconds % 3600;
    mins = seconds / 60;
    secs = seconds % 60;
    printf("Time = %d:%d:%d\n", hrs, mins, secs);
}

int main() {
    int seconds;
    printf("Enter total seconds: ");
    scanf("%d", &seconds);
    convertTime(seconds);
    /*lavanya2025280007*/
    return 0;
}
