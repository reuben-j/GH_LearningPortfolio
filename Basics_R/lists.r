# a list can contain different variables 
# a list is ordered and changeable

var_1 <- "DATA"
my_list <- list("BCOMP", 561, TRUE, var_1)
my_list

# access list elements
my_list[3] <- FALSE
my_list

# length
length(my_list) # 4

# check if item in list
list2 <- list(123, 321, 234, 432)
321 %in% list2 # TRUE

# add list items with append
list3 <- list("Me", "You", "Us", "Them")
append(list3, "Those") 

# can specifiy where to append new element
append(list3, "None", after = 3) # Me You Us None Them

#remove list items, this removes first element
# doesn't actually change it, it just prints it without the specified element
list3[-1]
list3

# specifiy to print a range of indexes
list4 <- list(123, 234, 345, 456, 567, 678, 789)
list4[2:4] # 234, 345, 456

#loop through a list
for(x in list4) {
    print(x)
} # prints each element off

#join two lists
list5 <- c(list4, list2)
print(list5)