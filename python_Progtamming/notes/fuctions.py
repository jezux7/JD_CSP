# JD 7th Fuctions Notes

# What a function is, A pre make section of codes to make a specific task

#print()
#input()

# Why we use functions
# to make the code mor simpl and easy to read

# How to write a function in Python

def welcome():
    name = input("what is your name?")
    print(f"Hello, {name}")

print("This is not my fuction")

#welcome()

def add(number, number_two):
    number += number_two
    print(number)

num_one = 12
num_two = 4

#add(80, 8)
#add(2, 4)
#add(7, 8)
#add(61, 77)

import random

def roll(mod):
    return random.randint(2, 18) + mod

print(f"Strenght: {roll(0)}\nDex: {roll(1)}\nInt: {roll(1)}\nhar: {roll(0)}")

# What parameters and arguments are
# a parameter is a variable that only exist inside of a fuction, and argument is when its called upon

# How to use parameters and arguments in python
# import random

#def roll(mod):
#    return random.randint(2, 18) + mod

#print(f"Strenght: {roll(0)}\nDex: {roll(1)}\nInt: {roll(1)}\nhar: {roll(0)}")

# What return statements are
# is a fundamental programming command that terminates the execution of a function and sends a specified value back to the code that called it. 

# How to use return statements in a program
#Return statements are used in programming to exit a function and, optionally, send a value back to the code that called the function.

# RETUN IS LIKE COPY PASTE