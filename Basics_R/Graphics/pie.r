# create pie charts with pie()

x <- c(10, 20, 30, 40)
pie(x)

#change startn=ing angle with init.angle
pie(x, init.angle = 90)

#labels and colours
colors <- c("Blue", "Green", "Yellow", "Pink")
my_label <- c("Water", "Apples", "Bananas", "Chilling")
pie(x, label = my_label, main = "Main Label of Sorts",
    col = colors, init.angle = 90)

#* Bar Charts
x_bar <- c("A", "B", "C", "D")
y_bar <- c(2, 5, 10, 2)

# density from 1 - 100
barplot(y_bar, names.arg = x_bar, col = "darkblue", density = 1)

# bar width and horizontal
barplot(y_bar, names.arg = x_bar, width = c(1, 2, 4, 2), horiz = TRUE)