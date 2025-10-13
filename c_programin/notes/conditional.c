// JD 7th Conditional notes

#include <stdio.h>
#include <string.h>
/* Logical Operators
&& and 
|| or 
! not*/

int main(void) {
    int grade;
    char name[20];
    printf("What is your grade in percent? ");
    scanf("%d", &grade);

    printf("What is your name? ");
    scanf("%s", &name);


    //printf("%d\n", strcmp(name, "Archie") == 0);
    if(name == "Jesus"){
        printf("Hello Jesus!\n");
    }else if(grade >= 90){
       printf("You have an A!\n");
    }else if(grade >= 80){
         printf("You have a B!\n");
    }else if(grade >= 70){
         printf("You have a C!\n");
    }else{
         printf("You are failing!\n");
    }
    
    

    
    return 0;
}








//What puts something inside of the “if” statement?
//  parentheses ()
//How are conditions written in C?
// if, else if, and else
//How do we write elif conditions in C?
// else if
//When do else conditions run?
// by default if no other conditions are met
//What are the 3 logical operators in C?
// &&, ||, !
