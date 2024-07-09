# lists
# used to store multiple items in a single variable
# lists are created using square brackets

myList1 = ["ford", "porsche", "lambo"]
print(myList1) # ['ford', 'porsche', 'lambo']

# list items are ordered, changeable and allow duplicate values
# list items are index as an array would be
print(myList1[0]) #ford

# use len(list) for list length
print(len(myList1)) # 3

#lists can contain different data types
myList2 = [123, "ABC", True, 12.23]
print(myList2) # [123, 'ABC', True, 12.23]

# lists are considered as an object with the data type list
print(type(myList2)) # <class 'list'>

#you can use the list() constructor when making a list
# this uses double round brackets instead
myList3 = list(("Reuben", "Abi", "Marcus"))
print(myList3) #['Reuben', 'Abi', 'Marcus']

#access items from list with accessing the index
print(myList3[0]) #Reuben
print(myList3[-1]) #Marcus - prints the last index
print(myList3[-2]) #Abi - prints the second last and so on

# you can select a range of indexes
list1 = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
print(list1[2:5]) # [2, 3, 4]

# without the beginning value, it will print from index 0
print(list1[:5]) # [0, 1, 2, 3, 4]

#without an end value, it will print to end
print(list1[5:]) # [5, 6, 7, 8, 9]

#change list items
list2 = [123, 234, 345, 456]
list2[0] = "Reuben"
print(list2) #['Reuben', 234, 345, 456]

#change a range of items
list2[0:2] = ["Abigail", "Marcus"]
print(list2) #['Abigail', 'Marcus', 234, 345, 456]

# if you insert too many new values compared to the range, these will be added at the specified point, followed by the rest of the existing values
list2[0:1] = ["Jordan", "Tommi", "Iris", "Jon"]
print(list2) #['Jordan', 'Tommi', 'Iris', 'Jon', 'Marcus', 345, 456]

# if you insert less items than the range states, the new value will take the specified range and
# the remaining items will move accordingly
list2[0:3] = ["Reuben"]
print(list2)

# list.insert(index, value) - to insert a new value without replacing an existing one, and to add it at a certain index
list3 = ["apple", "banana", "watermelon"]
list3.insert(0, "pineapple")
print(list3) #['pineapple', 'apple', 'banana', 'watermelon'].

# list.append(value) - to append a new value to the end of the list
list3.append("orange")
print(list3) #['pineapple', 'apple', 'banana', 'watermelon', 'orange']

# to join two lists together, use the extend function
# list.extend(list2)
listNew = [1, 2, 3]
listNew2 = ["Reuben", "Abi", "Marcus"]
listNew.extend(listNew2)
print(listNew) #[1, 2, 3, 'Reuben', 'Abi', 'Marcus']

# .extend() can also append any iterable object such as a tuple, set, dictionary etc.
tuple1 = (True, False, True)
listNew.extend(tuple1)
print(listNew) #[1, 2, 3, 'Reuben', 'Abi', 'Marcus', True, False, True]

# list.remove() removes the specified value from the list
listNew.remove("Reuben")
print(listNew) # [1, 2, 3, 'Abi', 'Marcus', True, False, True]
# if there are multiple values of the same value, it will remove the first one it reaches from the left

# list.pop(index) removes the specific index from the list
listNew.pop(0)
print(listNew) # [2, 3, 'Abi', 'Marcus', True, False, True]
# if now index is provided in pop(), it will remove the last item of the list

# del list[index] also removes value of target index
del listNew[0]
print(listNew) #[3, 'Abi', 'Marcus', True, False, True]

