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

# string.expandtabs(int) - sets tabsize of specified whitespaces
strExpand = "So\tma\tny\tsp\tac\tes"
print(strExpand.expandtabs(2)) #output - So  ma  ny  sp  ac  es

#string.find("substring") - returns location of first occurence of substring. Returns -1 if not found
strFind = "We are looking for a car!"
print(strFind.find("car")) #output - 21

# string.format() - formats the specified values and insert them into string placeholder
strFormat = "You are only {age:.2f} years old?"
print(strFormat.format(age = 23)) #output - You are only 23.00 years old?

# string.index(substring) - returns the index of the specified substring, throw error if not found
strIndex = "yet again looking for someone!"
print(strIndex.index("again")) #output 4

# string.isalnum() returns bool whether or nt whole string is alphanumeric or not
strIsAlnum = "YesIthinkthisisallalphanumerical"
print(strIsAlnum.isalnum()) #output - True

# string.isalpha() return bool whether whole string is alphabetic
strIsAlpha = "Ithinkthisisallalphabetic"
print(strIsAlpha.isalpha()) #output - True

# string.isascii() return bool whether all character are ascii
strIsAscii = "Testing For Ascii Char 123 !@#"
print(strIsAscii.isascii()) #output True

# string.isdecimal() returns True is all characters are decimal (0-9)
strIsDecimal = "12345566789"
print(strIsDecimal.isdecimal()) #output - True

# string.isdigit() return True is all characters are digits
strIsDigit = "690690"
print(strIsDigit.isdigit()) #output - True

# string.isidentifier() - return true if string is considered an identifier
# an identifier is considered to have letters A-Z, nums 0-9 and/or underscores. An identifier cannot start with a number or contain spaces
strIdentifier = "myFirstPythonFile_py"
print(strIdentifier.isidentifier()) #true

# string.islower() return true is all chars are lowercase
strLower = "ABCDEFG"
print(strLower.islower()) #false

# string.isnumeric() return true if all chars are numerical
strNumeric = "1234567ABDCE"
print(strNumeric.isnumeric()) #false

# string.isprintable() return true if all chars are printable. Non-printable chars are like \n \t 
strPrintable = "Hello World"
print(strPrintable.isprintable()) #true

# string.isspace() return true if all chars are whitespaces
strWhiteSPace = "    "
print(strWhiteSPace.isspace()) #true

# string.istitle() return true if string meets title criteria
# a title has all letters at start of words capitalised and rest of word lower case
strTitle = "This Is A Title!"
print(strTitle.istitle()) #true

# string.isupper() return true if all chars are upper case
strUpper = "asdxcv"
print(strUpper.isupper()) #false

# "separating char".join(tuple) 
# join a tuple with the specified joining char
myTuple = ("Reuben", "Abi", "Marcus")
strJoin = " ".join(myTuple)
print(strJoin) # Reuben Abi Marcus

# string.ljust(int)
# returns a string (int) chars long with the string adjusted to the left
strLJust = "apple"
strLJusted = strLJust.ljust(10)
print(strLJusted, "is so yummy!") # apple      is so yummy!

# string.lower() - returns a string where all chars are lower case
strUpperToLower = "AHHHH HELP!"
strNewLower = strUpperToLower.lower()
print(strNewLower) #ahhhh help!

# string.lstrip() - removes any leading spaces before actual string
strLStrip = "     Porsche   "
strLStripped = strLStrip.lstrip()
print(strLStripped) #Porsche

# string.maketrans("to replace", "to replace with")
# the to be replaced and to replace with substrings must be the same length
# use the following to create a table and translate function to piece it together
# under the hodd, it uses ascii to replace the necessary chars
strTrans = "I hope this stays the same!"
x = "h"
y = "a"
myTable = strTrans.maketrans(x, y)
print(strTrans.translate(myTable)) #output I aope tais stays tae same!

# string.partition(target string) - return a tuple where you receive the preceding strings, the target string alone in the middle and the proceding strings
strPartition = "I love my wife abi!"
parted = strPartition.partition("my")
print(parted) # ('I love ', 'my', ' wife abi!')

# string.replace(target string, replacement string)
strReplace = "I love Porsches"
strReplaced = strReplace.replace("Porsches", "Audis")
print(strReplaced) # I love Audis

# string.find(target string, first index, last index) returns index of the last found index of the target string
# search for the last occurence of the string in the specified index range
strFind = "I am looking for Reuben the nerd Reuben"
findInt = strFind.rfind("Reuben", 30, 40)
print(findInt) #33 <- index
 