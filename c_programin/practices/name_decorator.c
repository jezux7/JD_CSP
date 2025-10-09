// JD Name Decorator

#include <stdio.h>
#include <string.h>

int main(void){

    char name[] = "Hi, tell me a name";

    char decor1[] = "Put a sign going right:\n";

    char decor2[] = "Enter another sign going left:\n";

    printf(decor1 + name + decor2);

}