// JD 7th Loops Notes
#include <stdio.h>

int main (void){
    int nums[] = {1,2,3,4,5,6,7};  // Arrays
    char candy[][20] = {"Kitkat", "Nerds", "Hershey", "Skittles", "Reese's"};


    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);

    }


    for(int i = 0; i < 5; i++){
        printf("%s, is my favorite candy\n", candies[i]);
    }

    for(int num = 1; num < 11; num++){
        printf("%d\n", nums);
    }

    int num = 0;
    while(num < 11){
        printf("%d\n", num);
        num++;
    }
}

// What is a loop?
    // a place where the coode is gonna repet a specific number of times
// What are the two types of loops?
    // For and while
// What is iteration
    // repeting a part of code untill it happend the specific result we wanted
// What are arrays?
    // Just like a list in python
// How do you make lists in C?
    // std;;list
// How do you make for loops in C?
    // #include <stdio.h>
// int main() {
    // int i;
    // for (i = 0; i < 5; i++) {
    //    printf("%d\n", i);
    // }
    /// return 0;
// }
// How do you make while loops in C?
    //     int num = 0;
    // while(num < 11){
    //    printf("%d\n", num);
    //    num++;
    // }