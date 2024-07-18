# dictionaries are used to store data values in key:value pairs
thisDict = {
    "name": "Reuben",
    "age": 24, 
    "language": "English",
    "language": "Australian" #duplicate values will overwrite existing values
}
print(thisDict) #{'name': 'Reuben', 'age': 24, 'language': 'English'}
for x in thisDict:
    print(x) #name agee language
    print(thisDict[x]) # Reuben 24 English 
    
# dictionaries are ordered, changabel and do not allow duplicates
# use len(dict) to find lenght of dictionary
print(len(thisDict)) #3
print(type(thisDict)) #<class 'dict'>

# Can create dictionaries with the dictionary constructor
thatDict = dict(name = "Abi", age = 23, language = "English")
print(thatDict) #{'name': 'Abi', 'age': 23, 'language': 'English'}

# get to a specific value by requesting its value in the index or using dict.get() method
print(thatDict["name"]) #Abi
print(thatDict.get("name")) #Abi

# dict.keys() will return a list of all the keys
print(thatDict.keys()) #dict_keys(['name', 'age', 'language'])

# update values by referring to the actual key or the update dict.method()
thatDict["age"] = 30
print(thatDict.get("age")) #30
thatDict.update({"age": 23})
print(thatDict["age"]) #23

# add a pair to a dictionary by using an existing dict and declaring a new pair or using the dict.update() method
thatDict["height"] = 158
thatDict.update({"favFood":"Chocolate"})
print(thatDict["height"]) #158
print(thatDict.get("favFood")) #Chocolate

# dict.pop(key) to remove a specific item
thatDict.pop("height")
#! print(thatDict["height"]) throws error because it no longer exists
