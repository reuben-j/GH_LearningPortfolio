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

# sorting a vector -> sorts numerically and alphabetically
vec1 <- c(1323, 432, 345, 6543, 641, 9875, 12, 355)
# change from ascending to descending sorting with 'decreasing'
sort(vec1, decreasing = TRUE)

# sort alphabetically
vec2 <- c("Abigail", "Reuben", "Marcus", "Jimmy")
sort(vec2)

# access with index but different to arrays, these start at 1 not 0
print(vec2[1:2]) # "Abigail" "Reuben" 

# use c() to access a specified selection of elements
vec2[c(1,3)]

# access all items except what is specified
vec2[c(-2, -3)] # "Abigail" "Jimmy"

# change a specific element
vec3 <- c("Apple", "Microsoft", "Linux", "Intel")
vec3[2] <- "AMD"
vec3

# repeat vector with rep(), repeat each value a number of times
repeat_each <- rep(c(1, 2, 3), each = 3)
repeat_each # 1 1 1 2 2 2 3 3 3

# repeat the sequence a number of times
repeat_times <- rep(c(1, 2, 3), times = 3)
repeat_times # 1 2 3 1 2 3 1 2 3

# repeat elements a specified number of times via a new vector
repeat_independent <- rep(c(1,2,3), times = c(5,2,1))
repeat_independent #  1 1 1 1 1 2 2 3

# generating sequenced vectors
num_seq <- 1:10
num_seq # 1 2 3 4 5 6 7 8 9 10

# sequence numbers with a specified step
num_seq_2 <- seq(from = 0, to = 25, by = 5)
num_seq_2 # 0  5 10 15 20 25

