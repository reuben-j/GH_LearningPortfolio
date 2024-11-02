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
# use pch to change style of points
plot(1:50, cex=2, pch = 2)


#line graphs with type "l"
# line width with lwd
plot(1:50, type = "l", col = "dodgerblue", lwd = 2)

#line style with lty
plot(1:25, type = "l", col = "darkorange1", lty = 6, lwd = 3)

# 0 removes the line
# 1 displays a solid line
# 2 displays a dashed line
# 3 displays a dotted line
# 4 displays a "dot dashed" line
# 5 displays a "long dashed" line
# 6 displays a "two dashed" line

line1 <- c(1, 2, 3, 4, 5, 10)
line2 <- c(2, 5, 8, 9, 11, 15)

plot(line1, type = "l", col = "blue")
lines(line2, type = "l", col = "red")

#scatterplot
x <- c(5, 7, 8, 7, 2, 2, 9, 4, 11, 12, 9, 6)
y <- c(99, 86, 87, 88, 111, 103, 87, 94, 78, 77, 85, 86)

plot(x, y, main = "Observation of cars",
     xlab = "Car age", ylab = "Car speed (km/h)")

# day one, the age and speed of 12 cars:
x1 <- c(5, 7, 8, 7, 2, 2, 9, 4, 11, 12, 9, 6)
y1 <- c(99, 86, 87, 88, 111, 103, 87, 94, 78, 77, 85, 86)

# day two, the age and speed of 15 cars:
x2 <- c(2, 2, 8, 1, 15, 8, 12, 9, 7, 3, 11, 4, 7, 14, 12)
y2 <- c(100, 105, 84, 105, 90, 99, 90, 95, 94, 100, 79, 112, 91, 80, 85)

plot(x1, y1, main = "Observation of Cars", xlab = "Car age",
     ylab = "Car speed", col = "red", cex = 2)
points(x2, y2, col = "blue", cex = 2)