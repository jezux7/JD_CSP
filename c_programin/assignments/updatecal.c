// JD 7th Update Calculator


#include <stdio.h>


// Function to get user input with a prompt
float get_user_input(const char *prompt) {
    float value;
    printf("%s", prompt);
    scanf("%f", &value);
    return value;
}


// Function to calculate percentage of income
float calculate_percent(float income, float expense) {
    return (expense / income) * 100.0f;
}


int main() {
    // Get all user inputs using the input function
    float income = get_user_input("Hi, what is your monthly income? $");


    if (income <= 0) {
        printf("Income must be a positive number.\n");
        return 1;
    }


    float rent = get_user_input("What is your monthly rent? $");
    float utilities = get_user_input("What are your monthly utility bills? $");
    float groceries = get_user_input("How much do you spend on groceries each month? $");
    float transportation = get_user_input("How much do you spend on transportation each month? $");


    // Calculate percentages using the percentage function
    float rent_percent = calculate_percent(income, rent);
    float utilities_percent = calculate_percent(income, utilities);
    float groceries_percent = calculate_percent(income, groceries);
    float transportation_percent = calculate_percent(income, transportation);


    // Calculate savings (10% of income)
    float savings_percent = 10.0f;
    float savings = income * (savings_percent / 100.0f);


    // Total expenses and leftover
    float total_expenses = rent + utilities + groceries + transportation + savings;
    float leftover = income - total_expenses;


    // Print output
    printf("\nYour rent is $%.2f, which is %.1f%% of your income.\n", rent, rent_percent);
    printf("Your utilities are $%.2f, which is %.1f%% of your income.\n", utilities, utilities_percent);
    printf("Your groceries are $%.2f, which is %.1f%% of your income.\n", groceries, groceries_percent);
    printf("Your transportation is $%.2f, which is %.1f%% of your income.\n", transportation, transportation_percent);
    printf("You should save $%.2f each month, which is %.1f%% of your income.\n", savings, savings_percent);


    if (leftover < 0) {
        printf("\nYou are overspending by $%.2f each month.\n", -leftover);
    } else {
        printf("\nYou have $%.2f of spending money left each month!\n", leftover);
    }


    return 0;
}
