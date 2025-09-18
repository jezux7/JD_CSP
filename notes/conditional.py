# JD 7th nonditional notes

# What puts something inside of the “if” statement?
    # Is telling the computer if this is likae this this will happened

# What do if statements do?
    #Represent if somthing is true

# What are boolean statements? 
    # Somthing that always ends in true or false

# What do else statements do?
    # Represent the other outcome, option, false
# What kind of statement do you use if you have more than 2 needed outcomes?
    #eilf
# What do each of the different symbols mean in conditionals?
# < Less than
# > Greater than
# <= Less than or equal to
# >= Greater than or equal to
# == Is a quiestion to the computer
# ! Means Not

# What are the 3 logical operators?
    # And, Or, Not
# What are logical operators for?
    #they alwous to combine multiple conditions
# What does a nested conditional statement do?
    #only happends inside abother conditional


#homework_done = input("Is your homework done? ").strip().capitalize()

#if homework_done == "Yes":
#    print("Yes you can go")
#else:
#    print("Then go do your homework")


#grade = input("What is your grade ")

#grade = 72

#if grade >= 90:
    #print(f"You have {grade}% that is an A")
#elif grade >= 80:
    #print(f"You have {grade}% that is a B")
#elif grade >= 70:
    #print(f"You have a {grade}% that is a C or lower")


name = input("What is your name: ")

if name == "Ms LaRose":
    print("you ate the teacher")
elif name == "Tia" or name == "Ashley":
    print("You are the TA")
else:
    print(f"hello {name}, you are a student")



grade = 72

if grade >= 90:
    if grade is > 100:
        print("You cheated thast false")
    else:
    print(f"You have {grade}% that is an A")
elif grade >= 80:
    print(f"You have {grade}% that is a B")
elif grade >= 70:
    print(f"You have a {grade}% that is a C or lower")