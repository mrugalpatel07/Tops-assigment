# Write a Python program to iterate over a list using a for loop.
lst_number = [2,9,5,7,1,10,99,32]

for i in lst_number:
    print(i)

# Write a Python program to sort a list using both sort() and sorted()

# sorted == will not affect main list
print("After using sorted =",sorted(lst_number))

#sort  == will change the main list
lst_number.sort()
print("After using sort =",lst_number)
