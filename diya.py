y,b,r=map(int,input().split())
a=min(y,b-1,r-2)
if(a==r-2):
    print(3*r-3)
elif(a==b-1):
    print(3*b)
else:
    print(3*y+3)
    