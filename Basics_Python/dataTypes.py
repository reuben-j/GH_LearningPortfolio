# Data types

# text type
str1 = str("Reuben")

# Numerics types
num = int(2)
num1 = float(3.31)
num2 = complex(3+5j)

print(num2)

#Sequence types

#lists use square brackets
myList = [12, 23, 34]

#tuples are written with round brackets
#tuples is a collection which is ordered and unchangeable
myTuple = ("apple", "date", "banana")


#sets are written with curly braces
#set items are unchangeable. but can remove and add items 
mySet = {123, 321, 231}

#frozen sets are used to make it unchangeable
myFrozenSet = {"hi", "there", "mate"}
# myFrozenSet.add{"123"} this line of code throws an error because no item can be added to the frozen set
print(myFrozenSet)

#dictionaries are used to store data in key:value pairs
thisDict = {
    "brand": "Ford",
    "model": "GT",
    "year": 1978
}
print(thisDict) #to print the whole dictionary
print(thisDict["brand"]) #to print a particular item

#bool types hold true or false value
abiIsHot = True
if abiIsHot == True:
    print("yeah she is!")

# None is used to define a NULL value
x = None
print(x)
