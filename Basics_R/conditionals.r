10 == 9 #FALSE

a <- 12
b <- 22

# if statement
if(a > b) {
    "yeah!"
} else if(a ==b) {
    "a == b"
    } else {
    "nah!"
} #nah!

a <- 0
#while loop
while(a != 3) {
    print("yeah!")
    if(a == 2) print('a is 2!')
    a <- a + 1
} #yeah x3

new_Var <- 3
other_Var <- 2

if(new_Var > other_Var & 1 == 1) {
    print("Success")
}

if(!new_Var < other_Var | !12 != 1) {
    "double fail!"
}

#for loop
fruits <- list('apples', 'bananas', 'grapes')
for (x in fruits) {
    print(x)
}

dice <- c(1, 2, 3, 4, 5, 6)
for (x in dice) {
    print(x)
}

#nested loops
adj <- list("red", "big", "tasty")

fruits <- list("apple", "banana", "cherry")
  for (x in adj) {
    for (y in fruits) {
      print(paste(x, y))
  }
}