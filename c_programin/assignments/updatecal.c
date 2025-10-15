// JD 7th update_calculator.


#include <stdio.h>


float user_input(const char *prompt) {
    float value;
    printf("%s", prompt);
    scanf("%f", &value);
    return value;
}


float calculate_percent(float income, float expense) {
    return (expense / income) * 100.0f;
}


int main(void) {
    float income = user_input("Hi, what is your monthly income? ");


    if (income <= 0) {
        printf("Income must be a positive number.\n");
        return 1;
    }

    float rent = user_input("What is your monthly rent? ");
    float utilities = user_input("What are your monthly utility bills? ");
    float groceries = user_input("How much do you spend on groceries each month? ");
    float transportation = user_input("How much do you spend on transportation each month? ");

    float rent_percent = calculate_percent(income, rent);
    float utilities_percent = calculate_percent(income, utilities);
    float groceries_percent = calculate_percent(income, groceries);
    float transportation_percent = calculate_percent(income, transportation);

    float savings_percent = 10.0f;
    float savings = income * (savings_percent / 100.0f);

    float total_expenses = rent + utilities + groceries + transportation + savings;
    float leftover = income - total_expenses;

    printf("\nYour rent is $%.2f, which is %.1f%% of your income.\n", rent, rent_percent);
    printf("Your utilities are $%.2f, which is %.1f%% of your income.\n", utilities, utilities_percent);
    printf("Your groceries are $%.2f, which is %.1f%% of your income.\n", groceries, groceries_percent);
    printf("Your transportation is $%.2f, which is %.1f%% of your income.\n", transportation, transportation_percent);
    printf("You should save $%.2f each month, which is %.1f%% of your income.\n", savings, savings_percent);


    if (leftover < 0) {
        printf("\nYou are overspending by $%.2f each month.\n", -leftover);
    } 
    else {
        printf("\nYou have $%.2f of spending money left each month!\n", leftover);
    }

    return 0;
}