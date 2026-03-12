import time
start = time.time()
def fact(n):
    if n==1 :
        return 1
    else:
        return n*fact(n-1)
n=int(input())
j=fact(n)
end = time.time()
print(j)
print(end - start)

