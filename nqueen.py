n = int(input("Enter the no of queens: "))
b = [[0]*n for i in range(n)]
# print(b)

def isSafe(i,j):
    for k in range(n):
        if b[i][k] == 1 or b[k][j] == 1:
            return False
        
    for u in range(n):
        for v in range(n):
            if i+j == u+v or i-j == u-v:
                if b[u][v] == 1:
                    return False
    return True

def nqueen(noq):
    if noq == 0:
        return True
    
    for i in range(n):
        for j in range(n):
            if b[i][j] != 1 and isSafe(i,j):
                b[i][j] = 1
                if nqueen(noq-1) == True:
                    return True
                b[i][j] = 0
    return False

def printb(b):
    for i in b:
        print(i)

if nqueen(n):
    printb(b)
else:
    print("can't place")
