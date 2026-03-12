loc,pop=map(int,input().split())
c=[]
p=[]
for i in range(loc):
    x,y,z=map(int,input().split())
    c.append((x,y))
    p.append(z)
d=[]
for i in c:
    d.append((i[0]*i[0]+i[1]*i[1])**0.5)
pairs=[]
for i in range(loc):
    pairs.append([d[i],p[i]])
pairs.sort()
finalpop=pop
if(finalpop>=1000000):
    print(0)
    exit()
radius=-1
for dis,pp in pairs:
    finalpop+=pp
    if finalpop>=1000000:
        radius=dis
        break
if not radius:
    print("-1")
else:
    print(radius)