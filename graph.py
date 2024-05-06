m = int(input("Enter the no of colours: "))
g = {}
v = int(input("Enter the no of vertices: "))
n = int(input("Enter the no of edges: "))

for i in range(n):
    print(f"Enter the {i+1}th edge: ",end="")
    a,b = map(int,input().split())
    if g.get(a) == None:
        g[a] = []
    g[a].append(b)
    if g.get(b) == None:
        g[b] = []
    g[b].append(a)

colours = ["Violet","Indigo","Blue","Green","Yellow","Orange","Red"]

colList = {}
for i in range(v):
    colList[i] = -1

def canColour(g,k,col,colList):
    for c in g[k]:
        if colList[c] == colours[col]:
            return False
    return True

def graphCol(g,m,k,v,colList):
    if k == v:
        return True
    for col in range(m):
        if canColour(g,k,col,colList):
            colList[k] = colours[col]
            if graphCol(g,m,k+1,v,colList) == True:
                return True
            colList[k] = -1
    return False

if graphCol(g,m,0,v,colList):
    print(colList)
else:
    print("can't colour the graph!!!")