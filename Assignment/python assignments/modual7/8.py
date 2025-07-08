# Write a Python program to create a function that takes a string as input and prints it.
def str_name() :
    str_1 = input("Enter the string = ")
    return str_1
print(str_name())
# Write a Python program to create a calculator using functions.

def sum(num1,num2) :
    return num1+num2
def sub(num1,num2) :
    return num1-num2
def mul(num1,num2) :
    return num1*num2
def div(num1,num2) :
    return num1/num2

flag = True
while flag :
    print("1.Addition\n2.substraction\n3.Multiplication\n4.Divition\n5.exit")
    choise = int(input("Enter your choise = "))
    if choise == 1 :
        number1 = int(input("Enter the number  = "))
        number2 = int(input("Enter the number  = "))
        print(sum(number1,number2))
    elif choise == 2 :
        number1 = int(input("Enter the number  = "))
        number2 = int(input("Enter the number  = "))
        print(sub(number1,number2))
    elif choise == 3 :
        number1 = int(input("Enter the number  = "))
        number2 = int(input("Enter the number  = "))
        print(mul(number1,number2))
    elif choise == 4 :
        number1 = int(input("Enter the number  = "))
        number2 = int(input("Enter the number  = "))
        print(div(number1,number2))
    elif choise == 5 :
        flag = False
    else :
        print("Invalid choise")

