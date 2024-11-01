# arrays are multi-dimensional 

# create 1D array with value range
arr <- c(1:6)
arr

# create multi-dimensional array
arr2 <- array(arr, dim = c(3, 3, 3))
arr2
# above, dim function works by creating c(#row, #col, #dimensions)

#access array items
arr2[2, 3, 2]
#[row, col, dimension]

# access a certain number of elements from a row or column
arr2[c(1:2), c(1:3), c(1:2)]
# print rows 1-2 and columns 1-3 of matrices 1-2

#check if item in array
3 %in% arr2 #TRUE

#dim() to display number of rows and columns
dim(arr2) # 3 3 3 

# array length()
length(arr2) #27 (3 rows * 3 col * 3 matrices = 27 item)

#loop through array
for (x in arr2) {
  if (x %% 2 == 0) {
    print("Even")
  } else {
    print("Odd")
  }
}

