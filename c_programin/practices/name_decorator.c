// JD 7th Name Decorator

#include <stdio.h>
#include <string>

int main(void){
    char name[50];
    char decor1[10];
    char decor2[10];

    printf("Hi, tell me a name: ");
    scanf("%s", name);

    printf("Please put a sign going to the right: ");
    scanf("%s", decor1);

    printf("Enter another sign going to the left please: ");
    scanf("%s", decor2);

    printf("%s%s%s\n", decor1, name, decor2);

    return 0;
}
