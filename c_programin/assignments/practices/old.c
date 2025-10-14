// JD 7th Old Enough

#include <stdio.h>

int main(void) {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are old enough to vote.\n");
    }else if (age >= 16);
        printf("You are old enough to drive.\n");
    } else if (age >= 15) {;
        printf("You are old enough to get a learners permit.\n");
    } else if (age >= 5) {
        printf("You are old enough to go to school.\n");
    } else {
        printf("you aren't old enought to do anything do back to bed you baby.\n");
    }
    return 0;
}
