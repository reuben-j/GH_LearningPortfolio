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

# del list - will delete the entire contents of the list
del listNew
#!  print(listNew) this throws an error because there is no list anymore

list4 = ["I", "love", "beef"]
list4.clear()
print(list4) # [] <- list is empty 

# loop through a list
thisList = ["Porsche", "go", "very", "fast"]
for x in thisList:
    print(x) # Porsche \n go \n very \n fast

numList = [1, 2, 3, 4, 5]

# loop through the list by referring to their index numbers
for i in range(len(numList)):
    numList[i] *= 2
print(numList) #[2, 4, 6, 8, 10]

#loop through a list with a while loop
i = 0
while i < len(numList):
    print(numList[i])
    i += 1
# 2 \n 4 \n 6 \n 8 \n 10

#using list comprehension is the easiest way to print items in list
[print(x) for x in numList] # 2 \n 4 \n 6 \n 8 \n 10

# list comprehension offers a shorter syntax to create a new list based on values of existing list
# below shows creating a new list from existing list with fruit containing the letter 'a'
fruits = ["apple", "oranges", "melon", "grape", "fish"]
newList = []

#this shows the old fashioned way
for x in fruits:
    if "a" in x:
        newList.append(x)
    

#this shows with list comprehension
newList = [x for x in fruits if "a" in x]
print(newList) #['apple', 'oranges', 'grape']

# the syntax
#* newList = [expression for item in iterable if condition == true]

newList = [x for x in fruits if "p" in x]
print(newList) #['apple', 'grape']

#does not need the if statement
newList = [x for x in fruits]
print(newList) # ['apple', 'oranges', 'melon', 'grape', 'fish']

# what you iterate through can be anything

#return max number from list
intList = [1, 23, 31, 4, 52, 6, 7]
intmax = 0
for x in intList:
    if x > intmax:
        intmax = x
    else:
        continue
        
print(intmax)
    
#list sorting
thisStrList = ["chicken", "beef", "lamb", "blueberries", "butter"]
thisStrList.sort()
print(thisStrList) #['beef', 'blueberries', 'butter', 'chicken', 'lamb']

#to sort in reverse alphabetically
thisStrList.sort(reverse=True)
print(thisStrList) #['lamb', 'chicken', 'butter', 'blueberries', 'beef']

thisNumList = [12, 65, 7945, 12, 355, 4, 999]
thisNumList.sort()
print(thisNumList) #[4, 12, 12, 65, 355, 999, 7945]

thisNumList.sort(reverse=True)
print(thisNumList) #[7945, 999, 355, 65, 12, 12, 4]

#custom sort function
def myFunc(n):
    return abs(n - 50)

# this function returns first numbers closest to 50
thisNumList.sort(key = myFunc)
print(thisNumList)

#list sort is case sensitive, use lower to get past this
thisCapList = ["apple", "Banana", "chicken", "Dill"]

#this shows it sorted with capitals still counted
thisCapList.sort()
print(thisCapList) #['Banana', 'Dill', 'apple', 'chicken']

#this is with capitals sorted appropriately
thisCapList.sort(key=str.lower)
print(thisCapList) #['apple', 'Banana', 'chicken', 'Dill']

# list.reverse() reverse the current order of the list
thisCapList.reverse()
print(thisCapList) #['Dill', 'chicken', 'Banana', 'apple']

#copy lists
list01 = [213, 421, 941, 123]
list02 = list01.copy()

print(list02) #[213, 421, 941, 123]

# use the list(otherList) method to copy across list
list03 = list(list02)
print(list03) #[213, 421, 941, 123]

# join two lists with '+' operator
list04 = [12, 21, 23, 32]
list05 = ["apple", "banana", "cherry"]
list06 = list04 + list05
print(list06) # [12, 21, 23, 32, 'apple', 'banana', 'cherry']

#join two lists with the list.append(otherList) method
for x in list04:
    list05.append(x)
print(list05) #['apple', 'banana', 'cherry', 12, 21, 23, 32]

#extend method to add to end of the list
list07 = [True, False]
list08 = [1, 0]
list07.extend(list08)
print(list07) #[True, False, 1, 0]

#! list methods

# list.count("target") returns the amount of specified list component
list101 = [12, 23, 34, 12, 23, 34, 12]
num = list101.count(12)
print(num) #3

# list.index("target") returns the index of the first occurence of the target list item
list102 = ["apple", "banana", "apple", "cherry"]
print(list102.index("apple")) # 0

# to find the max and min numbers of a list
mynewlist = [12, 21, 214, 13, 41, 84, 1239]
print(max(mynewlist)) #1239
print(min(mynewlist)) #12