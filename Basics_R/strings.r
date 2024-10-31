#strings can be declared with single or double quotes
str1 <- "maaate"
str2 <- 'buuudy'

#multiline string
bigStr <- "Lorem ipsum dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua."

#cat() -> line breaks of big texts same as in code
cat(bigStr)

# nchar -> string length
nchar(bigStr) #123

#grepl check if substring in string
grepl("Lorem", bigStr) #TRUE

#combine strings
newStr <- paste(str1, str2)
newStr

#escape characters
str3 <- "hey \t buddy"
str3
