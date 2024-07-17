# sets are a collection of values that are unordered, unchangeable and unindexed
#set items are unchangeable, but you can add and remove items
# sets are declared with curly braces
mySet = {12, 23, 34}
print(mySet) #{34, 12, 23}

# sets do not allow for duplicates
mySet01 = {123, 123, 123, 12}
print(mySet01) #{123, 12}

#! print(mySet01[0]) #this throws an error because sets are unordered, you can not reference by index

# values 1 and True are considered duplicates, same for 0 and False
mySet02 = {1, True, 0, False}
print(mySet02) #{0, 1}

#get length of set
print(len(mySet02)) #2

#sets can contain different data types
mySet03 = {1, "2", False}
print(mySet03) #{False, 1, '2'}

#python recognises sets as:
print(type(mySet03)) #<class 'set'>