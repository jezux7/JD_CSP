// JD 7th Time of Day

#include <stdio.h>
#include <string.h>


int main(void) {
    int hour;

    printf("What is the hour in military time: ");
    scanf("%d", &hour);

    if (hour < 12) {
        printf("Good Morning!\n");
    } else if (hour < 18) {
        printf("Good Afternoon!\n");
    } else {
        printf("Good Evening!\n");
    }

    return 0;
}
