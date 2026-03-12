s=[int(x) for x in input().split('+')]
s.sort()
for i in range(len(s)):
    if(i==len(s)-1):
        print(s[i])
    else:
        print(s[i],"+",sep='',end='')
