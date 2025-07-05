# Practical Example 4: Print this pattern using nested for loop
# *
# * *
# * * * 
# * * * *
# * * * * *

row = int(input("Enter the number = "))

for i in range(0,row) :
    for j in range(0,i+1) :
        print("*",end=" ")
    print()

