#This is how to comment

#Declaring variables - variables do not need to be declared with a type and can even be changed following initial declaration
name = "Reuben"
print (name) #output: Reuben
name = "Abi"
print  (name) # ouput: Abi

age = 24 # int var 
height = 183.2 # float or double var
cha = 'A' #character variable

# you can type cast a certain variable type when setting if need be
x = int(33)
y = str("Hiya")

#printing type of variable
print(type(x)) # output: <class 'int'>
print (type(height))

#strings can be declared with single or double quotes
str1 = "Hello mate"
str2 = 'Hiya buddy'
print(str1, str2) #output: Hello mate Hiya buddy

#variable names are case sensitive, the following are two different variables
a = 23
A = 24
print(a, A) #output: 23 24

#delcare multiple variables at once
str3, str4, str5 = "hiya", "dude", "what up"
print(str3, str4, str5) #ouput: hiya dude what up

#assign one value to multiple varaibles
num1 = num2 = num3 = 3
print(num1, num2, num3) #outuput 3 3 3

#you can 'unpack' a collection of variable and assign each to a var. shown below from in the tuple

fruits = ["apple", "banana", "orange"]
fruit1, fruit2, fruit3 = fruits
print(fruit1, fruit2, fruit3) #output: apple banana orange