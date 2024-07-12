# a tuple is a collection which is ordered and unchangeable
# tuples are written with round brackest
# tuple items are ordered, unchangeable, and allow duplicate values.

myTuple = (12, 23, 34, 12)
# allows for dupliates:
print(myTuple) #(12, 23, 34, 12)

# len(tuple) returns length of the tuple
print(len(myTuple)) #4

# to create a tuple with a single item, you must use a comma after the item other
# wise it will not be recognised
singleTuple = ("Reuben",)
otherTuple = ("Reuben")
print(type(singleTuple)) # <class 'tuple'>
print(type(otherTuple)) # <class 'str'>

# tuples can contain multiple types of variables inside a single tuple
mixedTuple = ("Reuben", 24, True, 'A')
print(mixedTuple) # ('Reuben', 24, True, 'A')

#tuples can be created using the tuple creator 
newTuple = tuple((12, 23, 34, 45))
print(type(newTuple), newTuple) # <class 'tuple'> (12, 23, 34, 45)

#access tuple specifically with range index
tuple1 = (123, 234, 345, 456, 456, 567, 567, 678, 678)
print(tuple1[3:]) #(456, 456, 567, 567, 678, 678)

#tuples are unchangeable, if you want to change the value of a tuple,
# change it to a list, update value, change back to a tuple
tuple2 = {"Reuben", "Abigail", "Marcus"}
list1 = list(tuple2)
list1[0] = "Jordan"
tuple2 = tuple(list1)
print(tuple2) #('Jordan', 'Reuben', 'Marcus')

#tuples are immutable, they can not be added to. You can convert to a list
#add values, then convert back to a tuple
tuple3 = {1, 2, 3, 4, 5}
list2 = list(tuple3)
list2.append(True)
tuple3 = tuple(list2)
print(tuple3) #(1, 2, 3, 4, 5, True)

# you can add tuples together
tuple4 = (21, 32, 43, 54)
tuple5 = ("Me", "You", "them")
tuple4 += tuple5
print(tuple4) #(21, 32, 43, 54, 'Me', 'You', 'them')

# you can remove value from tuple by the list workaround
tuple6 = (21, 12, 43, 34, 54, 56)
list3 = list(tuple6)
list3.remove(21)
tuple6 = tuple(list3)
print(tuple6) #(12, 43, 34, 54, 56)

# del keyword deletes the tuple entirely
byeTuple = (1,)
del byeTuple
#!  print(byeTuple) throws error because it doesnt exist

#packing and unpacking a tuple
fruits = ("apple", "banana", "cherry")
(green, yellow, red) = fruits
print(green) # apple

# when you have less variables than values, use an asterisk to hold the rest of the values
cars = ("ford", "porsche", "lambo", "ferrari", "dodge")
(ford, porsche, *others) = cars
print(ford) #ford
print(porsche) #porsche
print(others) # ["lambo", "ferrari", "dodge"]

# the asterisk method can be used in the middle of variable declaration also
nums = (1, 2, 3, 4, 5, 6, 7)
(smallest, *middleNums, biggest) = nums
print(smallest) # 1
print(middleNums) # 2, 3, 4, 5, 6
print(biggest) #7