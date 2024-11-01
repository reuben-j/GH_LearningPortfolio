# data frames are displayed as a table
# pretty much a csv table

#data.frame() function
d_frame <- data.frame(
  per_age = c(24, 3, 87),
  per_name = c("Reuben", "Kid", "Old"),
  bool_val = c(TRUE, FALSE, FALSE)
)

d_frame

# summary() depending on data type, will give a certain overview
summary(d_frame)

#access columns and rows with [] for col and [[]] for rows
d_frame[[1]]

d_frame[3]

# access rows with $
d_frame$per_age

#add rows with dbind()
new_row_df <- rbind(d_frame, c(12, "Teen", TRUE))
new_row_df

# add columns with cbind()
new_col_df <- cbind(new_row_df, per_money = c(14000, 202, 99999, 1023))
new_col_df

#remove rows and columns
to_remove <- new_col_df
to_remove

# from four to three rows
to_remove <- to_remove[-c(1), ]
to_remove

#from four to three columns
to_remove <- to_remove[, -c(1)]
to_remove

#print number of rows and columns
dim(to_remove) # 3 3

# if you want specifically number of rows or columns
nrow(to_remove) #3
ncol(to_remove) #3

# or use length() to find number of columns
to_remove <- to_remove[, -c(1)]
to_remove
length(to_remove) #2

#combine two or more data frames
# need to have same number of rows or columns depending on how you add them
df_1 <- data.frame(
  Title = c("Bible", "Data Science", "Bryson"),
  Cover = c("Leather", "Paperback", "Hardcover"),
  Pages = c(1312, 281, 876)
)

df_2 <- data.frame(
  Title = c("Scrabble", "Man Bites Dog", "Monopoly"),
  Cover = c("Cardboard", "Cardboard", "Cardboard"),
  Pages = c(19, 8, 15)
)

# must have column names 
df_3 <- rbind(df_1, df_2)
df_3

# must have same number of rows
df_4 <- cbind(df_1, df_2)
df_4

