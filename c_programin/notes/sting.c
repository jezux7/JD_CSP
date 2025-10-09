// JD sting notes

// What is the difference between a string and a character?
    // A string is secuence of characters, basicly a car is 1 and a strins is 1 1 1 
// What types of quotation marks do we need for a string?
    // for stirng we use '' and for char we used ""
// What library do we need to include to access the string functions in C?
    // strcat
// List functions the library allows us to use.
    // <stdio.h>   <string.h>
// How do we concatenate strings in C?
    // by using stract()
// How do we get individual characters from a string in C?
    // by using %c

#include <stdio.h>
#include <string.h>

int main(void){
    char name[] = "Jesus";

    char last_name[25];
    printf("tell me your last name:\n");
    scanf("%s", last_name);
    char full_name[50];
    printf("%s\n", full_name);
    scanf(full_name, name);
    printf("%s\n", full_name);

    printf("%c\n", last_name[0]);
    last_name[0] = 'D';

    scanf(full_name, " ");
    printf("%s\n", full_name);

    scanf(full_name, last_name);
    printf("%s\n", full_name);


    printf("your name is %s %s", name, last_name);
    printf("%zu", strlen(name));
    printf("%zu", sizeof(name));

    return 0;
}