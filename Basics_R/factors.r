#factors are used to categorise data

music_genre <- factor(c("Jazz", "Rock", "Classic",
                        "Classic", "Pop", "Jazz", "Rock", "Jazz"))
music_genre # this prints the individual categories

levels(music_genre) #this prints them with no duplicates,
# only the levels

# use levels() inside factor declaration
music_genre <- factor(c("Jazz", "Rock", "Classic", "Classic",
                        "Pop", "Jazz", "Rock", "Jazz", "Street"),
                      levels = c("Classic", "Jazz", "Pop", "Rock", "Street"))
levels(music_genre)

#factor length()
length(levels(music_genre)) #prints 5

#access factors
# cannot change to item that was not declared in the levels
music_genre[3] <- "Street"
music_genre

