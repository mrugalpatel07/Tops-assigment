# • Practical Example 7: Write a Python program to calculate grades based on percentage using if-else ladder.

per = int(input("Percentage = "))

if per > 90  :
    print("Grade = A")
elif per > 75 and per <=90 :
    print("Grade = B")
elif per > 50 and per <= 75 :
    print("Grade = C")
elif per >35 and per <= 50 :
    print("Grade = D")
else :
    print("Grade = Fail")
