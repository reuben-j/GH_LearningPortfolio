# numerical, any whole or floating point number
num1 <- 10.5
class(num1)

#integer, any whole number where 'L' indicates int
num2 <- 44L
class(num2)

#complex -> a complex number are written as <real> + <imaginary>i
num3 <- 9i + 3
class(num3)

#character/string
str1 <- "Ayo wassup"
class(str1)

#logical/boolean
boolVar <- TRUE
class(boolVar)

#* type conversion

int1 <- 12L
numer1 <- 2

intToNumer <- as.numeric(int1)
intToNumer # 12
class(intToNumer) #numeric

numerToInt <- as.integer(numer1)
numerToInt #2

