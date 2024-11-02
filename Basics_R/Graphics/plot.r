# plot function
# parameter 1 takes x-axis and 2 takes y-axis
plot(1, 3)

#to draw more points, use a vector
plot(c(1, 8), c(2, 5), main = "Yep", col = "darkgreen", )

#better to declare with variables
x_axis <- c(1, 3, 5, 6)
y_axis <- c(4, 2, 4, 9)

plot(x_axis, y_axis)

#delcare with a sequence and a line
plot(1:20, type = "b", col = c("blue", "green"))

# use different types of graph
plot(1:100, type = "S", col = "magenta", main = "Steps")

# use cex to change size of points
plot(1:500, cex=0.2, xlim = )
