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