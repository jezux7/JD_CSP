// JD 7th Expresions Notes
#include <stdio.h>

int main(void){
int year = 2025;
float pi = 3.14;
double long_pi = 3.1415926358;

printf("%d", year);
printf("%d\n", 8/3);
printf("%f.2\n", 8.0/3);
printf("%d\n", (int) pow(2,4));

year += 1;
printf("%d", year);
year++;
printf("%d", year);


return 0;

}

// What is the difference between an integer and a float in C?
  // an int) is a number without a decimal point.   a float us a floating-point num
// How does C handle integer division compared to float division?
  // integer division yields only the whole num quotient by truncating any decimal part
// List the arithmetic operators available in C and their functions.
  // +, -, /, * and %
// What is the modulus operator, and how is it used?
  // a modulo its the remainder
// How do you round a float to the nearest integer in C?
  // .1
// What is type casting in C? Provide an example of explicit type casting.
  // The process of explicitily converting a variable of one data type to another by using the type cast operator
// How do compound assignment operators work in C? List three examples.
  // Addition, Equivalent, Multiplication
// What is the purpose of the math.h library? Name three functions it provides.
  // allow you to perform mathematical tasks on numbers
// How do you print a float with a specific number of decimal places using printf()?
  // %.NF

