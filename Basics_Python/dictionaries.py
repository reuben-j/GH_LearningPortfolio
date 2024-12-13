# dictionaries are used to store data values in key:value pairs
thisDict = {
    "name": "Reuben",
    "age": 24, 
    "language": "English",
    "language": "Australian" #duplicate values will overwrite existing values
}
print(thisDict) #{'name': 'Reuben', 'age': 24, 'language': 'English'}
for x in thisDict:
    print(x) #name age language
    print(thisDict[x]) # Reuben 24 English 
    
# dictionaries are ordered, changeable and do not allow duplicates
# use len(dict) to find length of dictionary
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

# dict.popitem() removes the last inserted item
thatDict.popitem()
print(thatDict.keys()) #dict_keys(['name', 'age', 'language']) <- favFood was popped and no longer present

# use the 'del' keyword to delete the pair or the entire dictionary
del thatDict["age"]
print(thatDict.get("age")) #none

#* del thatDict
#! print(thatDict) throws error as it no longer exists

# dict.clear() method clears the dictionaries
thatDict.clear()
print(thatDict) #{}

# to loop through a dictionary
newDict = {
    "brand": "Peugoet",
    "model": "308",
    "year": 2008
}

for x in newDict:
    print(x)  # will print all keys
    print(newDict[x]) # will print all values
    
for x in newDict.values():
    print(x) # will print all values
for x in newDict.keys():
    print(x) # will print all keys
    
# to loop through both keys and values:
for x, y in newDict.items():
    print(x, y) 
    # brand Peugoet
    # model 308
    # year 2008
    
# to copy one dict to another 
newestDict = newDict.copy()
print(newestDict) #{'brand': 'Peugoet', 'model': '308', 'year': 2008}

newNewestNewDict = dict(newDict)
print(newNewestNewDict) # {'brand': 'Peugoet', 'model': '308', 'year': 2008}

# create a nested dictionary, one dictionary that holds three dicionaries
myFamily = {
    "Reuben": {
        "age": 24,
        "car": "Peugeoet"
    },
    "Jordan": {
        "age": 25,
        "car": "Tiguan"
    },
    "Tommi": {
        "age": 23,
        "car": "Amarok"
    }
}
print(myFamily["Reuben"]["age"]) #24
print(myFamily["Jordan"]["car"]) #Tiguan

# you can chose to create unlimited dictionaries, but then create a final dictionary to 
# hold the ones you already made

person1 = {
    "name": "Abi",
    "role": "Nurse"
}

person2 = {
    "name": "Reuben",
    "role": "Paramedic"
}

dictOfRelations = {
    "person1" : person1,
    "person2" : person2
}

print(dictOfRelations["person1"]["role"]) # Nurse

# loop through keys and values of all nested dictionaries
for x, obj in dictOfRelations.items():
    print(x)
    
    for y in obj:
        print(y + ":", obj[y])
        
# person1
# name: Abi
# role: Nurse
# person2
# name: Reuben
# role: Paramedic

# dictionary methods:

# dict.clear()
dictToClear = {
    "me" : "Reuben",
    "you" : "Abi"
}
dictToClear.clear()
print(dictToClear) # {}

# dict.fromkeys() will create a dictionary with three keys all with the same value of 10
x = ('key1', 'key2', 'key3')
y = 10
dictKeys = dict.fromkeys(x, y)
print(dictKeys) # {'key1': 10, 'key2': 10, 'key3': 10}

# use dict.defauly(key, value) to have a default value set within a dictionary. If not set, it will be called automatically.
DictDefault = {
    "brand": "ford",
    "model" : "GT"
}
x = DictDefault.setdefault("model", "mustang") 
print(x) #GT
print(DictDefault) # {'brand': 'ford', 'model': 'GT'}
