def Recur(n):
    if n >= 10:
        return 1
    else:
        print("n: ", n)
        return n * Recur(n + 1)        
print(Recur(4))