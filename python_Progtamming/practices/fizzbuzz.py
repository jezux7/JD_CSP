# JD 7th FizzBuzz

x = 1

while x < 51:
    if x % 3 == 0:
        print(f" Fizz")
    elif x % 5 == 0:
        print(f" Buzz")
    else:
        print(f"{x}")
    x += 1