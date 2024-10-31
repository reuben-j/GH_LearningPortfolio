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
class(numerToInt) #integer

#* Basic Math
10 + 5
#15

10 - 5
#5

10 * 5
#50

10 ^ 4
10 ** 4
#10,000

10 / 5
#2

10 %% 4
# 2

#int division
4.4 %/% 1
#4

#min -> returns min in set
min(12, 321, 4) #4

max(21, 32, 541) #541

#sqrt
sqrt(16) #4

#abs()
abs(-4.41) #4.41

#ceiling() -> rounds number up to closet int
ceiling(1.2) #2

floor(1.9) #1

