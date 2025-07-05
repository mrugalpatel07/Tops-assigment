# • Practical Example 8: Write a Python program to check if a person is eligible to donate blood using a nested if.

age = int(input("Enter the Age = "))
weight = int(input("Enter the Weight = "))

if age > 20 :
    if weight > 50 :
        print("You are eligible to donate blood")
    else :
        print("Better luck next time") 
else :
    print("Better luck next time")