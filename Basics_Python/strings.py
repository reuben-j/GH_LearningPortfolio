import random

#using random library, print random letter from 1 to 10
print(random.randrange(1, 10))

#you can create multiline string variables using three double or single quote marks """
str1 = """Hi there mate
how ya going? """
print(str1)

str2 = '''Woah look there's only singles now!
how good!'''
print(str2)

#slice a string with the following function
str3 = "Hello world!"
print(str3[2:5]) #prints the chars starting at index 2 to 5
#output is 'llo'

#you can slice from the start also without a beginnign number
print(str3[:5]) #output 'Hello'

#slice to the end from a certain index
print(str3[2:]) #output 'llo world!'

#slice from the end of the string by using '-'
print(str3[-6:-1])

# upper()
string1 = "reuben"
print(string1.upper()) #output REUBEN

# lower()
string2 = "REUBEN"
print(string2.lower()) #output reuben

#strip() removes whitespaces from string
string3 = "  I sure hate whitespace!   "
print(string3.strip()) #output 'I sure hate whitespace'

# replace() function replaces one string with another
string4 = "Hiya buddy"
print(string4.replace("Hiya", "Cya")) #output Jumb buddy

#split() function splits the string into substrings where ever a certain separator is present
string5 = "lets, look, at, the, duck"
print(string5.split(",")) #output - ['lets', ' look', ' at', ' the', ' duck']
