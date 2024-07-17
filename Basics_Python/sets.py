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

#use the constructor set(("item1", "item2")) with double parenthesis
mySet04 = set((12, 23, 34, 45))
for x in mySet04:
    print(x) #34 12 45 23
    
# cannot access items directly in set, instead can check whether a value is present or not
if 12 in mySet04:
    print("True") #True

#check if item is not in set
if 122 not in mySet04:
    print("122 not present") #122 not present

#you cannot change existing values of set, but can add items
mySet05 = {"Reuben", "Abi", "Marcus"}
mySet05.add("Iris")
print(mySet05) #{'Abi', 'Iris', 'Marcus', 'Reuben'}

#set.update(set2) to add one set to another
mySet05.update(mySet04)
print(mySet05) #{'Reuben', 34, 'Marcus', 12, 'Abi', 45, 23, 'Iris'}

#the use of the set.update() method is not limited to sets
myList = [12, 23, 34]
mySet06 = {123, 234, 345}
mySet06.update(myList)
print(mySet06) #{34, 456, 234, 12, 45, 23, 345, 123}

# set.remove(var) to remove specific items from set
if 123 in mySet06:
    mySet06.remove(123)
print(mySet06) #{34, 234, 12, 23, 345}
# if the specified item in remove does not exist, an error will be thrown

#set.discard(var) will remove item from set, but will not throw error if item doesnt exist in list
mySet06.discard(3400)
print(mySet06) # {34, 234, 12, 23, 345}

# set.pop() method will return a item from set picked from random to be removed from the set
mySet07 = {"Reuben", "Jordan", "Marcus", "Tommi"}
popped = mySet07.pop()
print(popped) # will return a different random item from mySet07 each time it is ran
print(mySet07) # will return the remaning three items that still exist in set

#set.clear() empties set of items
mySet08 = {True, False, 123, 234}
mySet08.clear()
print(mySet08) #set()

# del set - deletes the set entirely
del mySet08
#! print(mySet08) throws an error because it no longer exists

#loop through set with for loop
mySet09 = {"Ford", "Lambo", "Maserati", "Porsche"}
for x in mySet09:
    print(x) # Ford Lambo Maserati Porsche

