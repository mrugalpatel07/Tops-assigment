# Write a Python program to add elements to a list using insert() and append().

lst_elements = [1,2,3,9,"Hello","Good morning"]

lst_elements.insert(1,10)
print("After using insert",lst_elements)
lst_elements.append("bye")
print("After using append",lst_elements)

# Write a Python program to remove elements from a list using pop() and remove().

lst_elements.pop(4)
print("After using pop",lst_elements)

lst_elements.remove("Hello")
print(lst_elements)