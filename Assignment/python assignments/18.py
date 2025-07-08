# Write a Python program that manipulates and prints strings using various string methods.

str_Temp = "Tops Technologies"

print("lenth = ",len(str_Temp))                    
print("Lower = ",str_Temp.lower())
print("Upper = ",str_Temp.upper())
print("Capitalized = ",str_Temp.capitalize())
print("Titel = ",str_Temp.title())
print("Strip = ",str_Temp.strip())
print("Replace = ",str_Temp.replace("T","Q",1))
print("Fine = ",str_Temp.find("T"))
print("startswith = ",str_Temp.startswith("Tops"))
print("endswith = ",str_Temp.endswith("s"))
print("Split = ",str_Temp.split("T",1))
print("Join = "," ".join(str_Temp))
print("isalpha = ",str_Temp.isalpha())
print("isdigit =",str_Temp.isdigit())
print("isalnum = ",str_Temp.isalnum())
print("zfill = ",str_Temp.zfill(50))