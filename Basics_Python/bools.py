# operators
print(8 > 10) # false
print(8 >= 10) # false
print(8 == 10) # false
print(8 <= 10) # true
print(8 < 10) # true

#if statement
num1 = 10
num2 = 5
if num1 > num2:
    print(num1, "is greater than ", num2)
else:
    print(num2, "is greater than ", num1)
# output 10 is greater than 5

#evaluate values and variables
print(bool(15 > 103)) # false

# almost all values are true. Empty strings are false. Int with value 0 is false.
# any list, tuple, set and dictionary are true unless empty

print(bool(None)) # false
print(bool(0)) # false
print(bool("")) # false
print(bool({})) # false

# a function can return a boolean value
def myBoolFunc():
    return True

print(myBoolFunc()) # True

if(myBoolFunc()):
    print("Func is true") # <- this one is outputted
else: 
    print("My func false")
    
# isinstance(var, type) returns true if the target variable is the same type as the target type
num3 = 100
print(isinstance(num3, str)) #false because num3 is not a string

#Python arithmetic operators
int1 = 10
int2 = 5

# +
print(int1 + int2) # 15

# -
print(int1 - int2) # 5

# * 
print(int1 * int2) # 50

# /
print(int1 / int2) # 2.0

# %
print(int1 % int2) # 0 

# **
print(int1 ** int2) #100,000, 10 to the power of 5

#- // floor division
print(int1 // 3) # 3, rounds result of division to nearet integer