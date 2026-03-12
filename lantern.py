t,x1,y1,x2,y2=map(int,input().split())
s=input()
d1=x2-x1
d2=y2-y1
count=0
for i in range(len(s)):
    if(x1==x2 and y1==y2): break
    elif(d1<0 and s[i]=='W' and x1!=x2): x1-=1
    elif(d1>0 and s[i]=='E' and x1!=x2): x1+=1
    elif(d2<0 and s[i]=='S' and y1!=y2): y1-=1
    elif(d2>0 and s[i]=='N' and y1!=y2): y1+=1
    count+=1
if(x1==x2 and y1==y2):
    print(count)
else:print(-1)