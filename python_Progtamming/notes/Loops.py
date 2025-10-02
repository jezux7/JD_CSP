# JD 7th Loops Notes

# What is a loop?
    # they reapetd the code inside them for a spefifid number of times
# What are the two types of loops?
    # For loops:

#foods = ["Chocolate", "Arepa", "Pabellon Criollo", "Arroz con Huevo"]
#for food in foods:
    #print(f"{food} is my fav food")

#for x in range(1,20):
    #print(x)

    # While Loops:  1. Iterator = How many times it runs, 2. Set a stopping point, 3. Increase Iterator

    # While Loop:

# i = 1

# while i < 20:
    # print(i)
    # i+= 1


# What is iteration
    # repetation of the same code

# What are lists? 

# How do you make lists in python?

# How do you make for loops in python? 

# How do you make while loops in python?

x = 1

while x < 21:
    if x % 2 ==0:
        print(f"{x} is an even number")
    else:
        print(f"{x} is an odd number")
    x += 1

import random

d = 1
end = random.randint(1,20)

while d != end:
    print("Duck")
    d += 1

print("Goose")

while True:
    if d == end:
        print("Gosse")
        break
    else:
        print("DUCK")
        d += 1