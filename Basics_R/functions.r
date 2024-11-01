
#* functions
my_function <- function() {
  print("Hello world!")
}


my_function()
func2 <- function(name) {
  paste("Hello ", name)
}

my_name <- "Reuben"
func2(my_name)

#default parameter values
func3 <- function(age = 23) {
    paste("You are: ", age)
}

func3(41) #41
func3() #23

# return value
func4 <- function(x) {
  return(x ^ 2)
}

print(func4(4))

# recursion with factorial question
recurse <- function(num) {
  if (num <= 0) {
    return(1)
  } else {
    return(num * recurse(num - 1))
  }
}

print(recurse(5))
