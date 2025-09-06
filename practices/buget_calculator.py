# JD 7th Buget Calculator


# Ask the user for their income and expenses
income = float(input("Hi could you tell me what is your monthly income? "))

rent = float(input("What is your monthly rent? "))
utilities = float(input("What are your monthly utility bills? "))
groceries = float(input("How much do you spend on groceries each month? "))
transportation = float(input("How much do you spend on transportation each month? "))

# Calculate percentages of income

rent_percent = (rent / income) * 100
utilities_percent = (utilities / income) * 100
groceries_percent = (groceries / income) * 100
transportation_percent = (transportation / income) * 100

# Calculate savings (10% of income)

savings = income * 0.10
savings_percent = 10

# Calculate remaining money

total_expenses = rent + utilities + groceries + transportation + savings
leftover = income - total_expenses

# Print the results

print("Your rent is $", rent, "and that is", round(rent_percent), "% of your income.")
print("Your utilities are $", utilities, "and that is", round(utilities_percent), "% of your income.")
print("Your groceries are $", groceries, "and that is", round(groceries_percent), "% of your income.")
print("Your transportation is $", transportation, "and that is", round(transportation_percent), "% of your income.")
print("You should save $", round(savings, 2), "each month, that is", savings_percent, "% of your income.")
print("You have $", round(leftover, 2), "of spending money each month!")
