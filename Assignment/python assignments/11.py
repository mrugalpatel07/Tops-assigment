# Practical Example 3: Write a Python program to find a specific string in the list using a simple for loop and if condition.

lst_name = [ 'apple','banana','mango']
name = input("Enter the name = ")

for i in lst_name :
    if i == name :
        print(i)
        break
else :
    print("There is no such string") 