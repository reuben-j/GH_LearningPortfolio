# def Recur(n):
#     if n >= 10:
#         return 1
#     else:
#         print("n: ", n)
#         return n * Recur(n + 1)        
# print(Recur(4))

# # Recursively return sum of ints from list

def recur_list(lister, n):
    a = len(lister)
    if a <= 0:
        return n
    else:
        n += lister[a - 1]
li = [123, 321, 234, 543]

print(recur_list(li, 0))