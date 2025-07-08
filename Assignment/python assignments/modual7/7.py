# Write a Python program to update a value in a dictionary.
dict_info = {1:"one",2:"Two",3:"Three",4:"Four",5:"Five",6:"Six"}
dict_info[2] = "good"

print(dict_info)
# Write a Python program to merge two lists into one dictionary using a loop.
lst_number1 = [1,2,3,4,5]
lst_number2 = [6,7,8,9,10]

dict_number = {}

for i in range(len(lst_number1)) :
    dict_number[lst_number1[i]] = lst_number2[i]

print(dict_number)