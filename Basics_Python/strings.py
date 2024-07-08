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

#string concantenation
str01 = "hiya "
str02 = "buddy"
str03 = str01 + str02
print(str03) #output hiya buddy

# format a string using 'f' before a string then {var name}
age = 24
str04 = f"Hi my name is Reuben and I am {age} years old"
print(str04) #output Hi my name is Reuben and I am 23 years old

#placeholder value allows you to use a floating point decimal 
price = 59.133143
str05 = f"this will cost you {price:.2f} dollars"
print(str05) #output - this will cost you 59.13 dollars

#use a placeholder to allow you to do a modifier inside a string
str06 = f"please print 12 * 23 = {12 * 23}"
print(str06) #output - please print 12 * 23 = 276

#escape characters

#  \" text \" to allow you to have double quotes inside string
str07 = "You are a \"legend\""
print(str07) #output - You are a "legend"

#  \' text \'
str08 = "\'A\' is my favourite character"
print(str08) #output - 'A' is my favourite character

# backslash \
str101 = "Testing the back\\slash escape char"
print(str101) #output - Testing the back\slash escape char

# \n newline
str09 = "Testing the newline \nescape character"
print(str09) #output - Testing the newline 
#                      escape character
             
#! String functions - 45 in total

# string.capitalize() - return new word with first letter capitalized
strCap = "hello mate"
print(strCap.capitalize()) #output Hello mate

# string.asefold() - Converts string to lower case
strCaseFold = "HELLO MY BOY"
print(strCaseFold.casefold()) #output - hello my boy

#string.center(int) - center align the string using a specified fill character (space is default)
#what ever the int inout is, it is placed in  the middle of that many characters
strCenter = "Middle"
print(strCenter.center(20, "-")) #output - -------Middle-------

#string.count("substring") - returns a number of times a specified value occurs in the string
strCount = "I love Abi, Abi, Abi is great!"
num = strCount.count("Abi")
print(num) #output - 3

# string.encode will encode the string with a default choice of UTF-8 or a specified encoding
strEncode = "Reuben is my name!"
coded = strEncode.encode(encoding="ascii",errors="replace")
print(coded) #output - b'Reuben is my name!'

# string.endswith(substring) - returns a bool is the string ends with specified substring
strEnds = "I am looking for Abi"
endsWithAbi = strEnds.endswith("Abi")
print(endsWithAbi) #output - True

