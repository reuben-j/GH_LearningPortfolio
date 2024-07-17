# sets are a collection of values that are unordered, unchangeable and unindexed
#set items are unchangeable, but you can add and remove items
# sets are declared with curly braces
mySet = {12, 23, 34}
print(mySet) #{34, 12, 23}

# sets do not allow for duplicates
mySet01 = {123, 123, 123, 12}
print(mySet01) #{123, 12}

#! print(mySet01[0]) #this throws an error because sets are unordered, you can not reference by index

