# matrices are 2D data sets with columns and rows
this_matrix <- matrix(c(1, 2, 3, 4, 5, 6), nrow = 2, ncol = 3)
this_matrix
# prints matrix of 2 rows x 3 columns

# can be used to create matrix of strings
str_matrix <- matrix(c("Reuben", "Abi", "Marcus", "Jimmy"), nrow = 1, ncol = 4)
str_matrix
# prints matrix of one row 4 colums

# access matrix items with brackets, row then column
print(str_matrix[1, 3])
# Marcus

# access whole row if you specify without column
str_matrix[1, ]
# Reuben Abi Marcus Jimmy

# access only a column
str_matrix[, 4]
# Jimmy

#access multiple rows or columns with concatenate function
big_num_matrix <- matrix(c(12, 21, 23, 32, 34, 54, 56, 65, 76, 78,
                           87, 89, 98, 101), nrow = 2, ncol = 7)
big_num_matrix

# prints only columns 1 and 3
big_num_matrix[, c(1, 3)]

# use rbind() to add more rows to matrix
big_num_matrix <- rbind(big_num_matrix, c(213, 432, 345, 654, 567, 756, 678))
big_num_matrix

# then use cbind() to add more data into a column
big_num_matrix <- cbind(big_num_matrix, (c(100, 102, 999)))
big_num_matrix
# adds specified data to a new column

# remove rows and columns
new_num_matrix <- matrix(c(1, 2, 3, 4, 5, 6, 7, 8, 9, 10), nrow = 2, ncol = 5)
new_num_matrix

new_num_matrix <- new_num_matrix[, -c(1)]
new_num_matrix # removes first column

new_num_matrix <- new_num_matrix[-c(2), ]
new_num_matrix # removes second row

# check if item exists with %in% operator
search_matrix <- matrix(c("AB", "BC", "CD", "DE", "EF", 
                          "FG", "GH", "HI", "IJ"), nrow = 3, ncol = 3)
"JK" %in% search_matrix # FALSE
"EF" %in% search_matrix # TRUE

# use dim() to return number of rows and columns in matrix
dim(search_matrix) # 3 3 

# use length() to find the dimension of matrix
length(search_matrix) # 9

# loop through a matrix
for (rows in 1 : nrow(search_matrix)) {
  for (columns in 1:ncol(search_matrix)) {
    print(search_matrix[rows, columns])
  }
}
# prints each individual item in matrix

#combine two matrices
matrix1 <- matrix(c("apple", "banana", "cherry", "grape"), nrow = 2, ncol = 2)
matrix2 <- matrix(c("orange", "mango", "pineapple", "watermelon"),
                  nrow = 2, ncol = 2)

# Adding it as a rows, puts them under
matrix_combined <- rbind(matrix1, matrix2)
matrix_combined

# Adding it as a columns, put them next to
matrix_combined <- cbind(matrix1, matrix2)
matrix_combined

