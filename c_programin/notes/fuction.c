// JD 7th Fuction notes

#include <stdio.h>

void birthday(char* name, int age){
    printf("Happy Birthday to you\n");
    printf("Happy Birthday to you\n");
    printf("Happy Birthday dear %s\n",name);
    printf("Happy Birthday to you\n");
    printf("Happy Birthday %s are now %d!\n", name, age);
}

int mul(int x, int y){
    return x *y;
}

float get_number(char* type){
    float value;
    printf("How many %s do u have:\n", type);
    scanf("%f", &value);
    return value;
}

int main (void){
    birthday("Jesus", 15);
    birthday("Gwen", 14);
    birthday("Spiderman", 16);
    int product = mul(8,5);
    printf("%d\n", product);
    printf("%d\n", mul(35,76));
    float pencils = get_number("pencils");
    float notebooks = get_number("notbook");
    printf("u have %2.f pencils and %.2f notebook!", pencils, notebooks);
    return 0;
}


// What a function is
    // Somthing that assings each input to a output
// Why we use functions
    // Make the code more short and easy to understant
// How to write a function in C
    // 
// What are arguments and parameters?
    // variables and guidelines
// How do arguments and parameters work together?
    // puting data inside fucctions
// How to use parameters and arguments in C
    //  by value
// What are return statements?
    // to end the code
// How do return statements change how you define a function in C?
    // determinig its return type and the value it provides
// What do return statements do with the information?
    // determin the return type and the value it gives