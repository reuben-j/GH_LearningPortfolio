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
