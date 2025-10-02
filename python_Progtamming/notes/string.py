# JD 7th String notes

# What makes something a string?  
# acollection of letter, numbers, and symbols that are surremdere by quatiation marks
# Why do we have strings?
#
# How do stupid proofing and sanitization relate to each other?
# is getting ridd of spaces and putting the rights capitals, stupid proofing is building your code for the user can breaket

# What is debugging?
# Is the proces of fixing your code  

# How do you debug the different types of errors?
# Syntax Error - bad in grammar, tabs, missspelling, forget stuff

# Logic Error - 
numone = "1"
numtwo = "2"
print(numone+numtwo)

# Run-Time error - 

# Describe what each of the methods below does:

# find() it finds a specific letter or word
# concatenate (add) the + is how you can combine to strings
# upper() to make all letters uppercase
# lower() to make all letters lowercase
# strip() it get rid of space on the sides


#Example

first_name  = input("What your name:\n").strip().title()

last_name = input("What your last name:\n").strip().title()

full_name = first_name +  " " + last_name

senetence = 'The quick brown fox jumps over the lazy dog'.strip()

print(senetence.find("jumps"))
print(senetence[20:25])
print(senetence[senetence.find("lazy"): len("lazy")+senetence.find("lazy")])
print("Welcome to my progarm", last_name + ("!"))
