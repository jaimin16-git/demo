n=int(input())
l=[]
s=set()
for j in range(n):
    x =input()
    l.append(x)
newl=[]
for i in range(n-1,-1,-1):
    if l[i] not in s:
        s.add(l[i])
        newl.append(l[i])
for p in newl:
    print(p)