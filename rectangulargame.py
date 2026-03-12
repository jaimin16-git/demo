def lcd(x):
    y=x
    for i in range(2,int(x**0.5)+1):
        if(x%i==0):
            y=i
            break
    return y
n=int(input())
sum=0
while(n>1):
    sum+=n
    n=int(n/lcd(n))
sum+=n
print(sum)