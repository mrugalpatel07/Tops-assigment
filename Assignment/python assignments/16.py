# Write a Python program to skip 'banana' in a list using the continue statement. List1 = ['apple', 'banana', 'mango']

lst_name = ['apple', 'banana', 'mango']

for i in lst_name :
    if i == 'banana' :
        continue
    else :
        print(i)

# Write a Python program to stop the loop once 'banana' is found using the break statement.

for i in lst_name :
    if i == 'banana' :
        break
    else :
        print(i)
