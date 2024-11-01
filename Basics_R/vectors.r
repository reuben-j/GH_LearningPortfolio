# vector is a list of any of the same item type
fruits <- c("Apple", "Bananas", "Orange")
fruits[2]

numbers <- c(121, 324, 543)
numbers

#! c() is a function that combines or concatenates items into a vector

# vector of numerical values in a sequence
seq <- 1:99
seq

# you can create a sequence of floating point numbers
seq2 <- 1.5:6.5
seq2 # 1.5, 2.5, 3.5, 4.5, 5.5, 6.5

# in this vector, the last numerical value will not be printed
# because it does not belong to the sequence
seq3 <- 1.5:6.4
seq3 # 1.5, 2.5, 3.5, 4.5, 5.5

# create vector of boolean values
bool_vec <- c(TRUE, FALSE, FALSE, TRUE)
# loop through them and test each value
for (x in bool_vec) {
  if (x == TRUE) {
    print("TRUE!")
  } else {
    print("FALSE :(")
  }
}

# vector length
print(length(bool_vec)) # 4

