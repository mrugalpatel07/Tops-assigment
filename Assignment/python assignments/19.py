# Write a python program to apply the map() function to squre a list of number 

lst_num = [1,2,3,4,5,6]
squre_number = list(map(lambda num : num*num,lst_num))
print(squre_number)

# write a python program that uses reduse() to find the product of a list of number 

from functools import reduce 
lst_num1 = [1,2,3,4,5,6,7,8]

def product_of (lst_num1) :
    return reduce(lambda x,y : x+y,lst_num1)

product = product_of(lst_num1)
print(product) 

#  write a python program that filter out even number using  filter() function 

number = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]

even_number = list(filter(lambda num : num%2 == 0,number))
print(even_number)
