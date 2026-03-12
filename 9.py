n=int(input("Enter a number: "))

a=0
while(a>=0):
	for i in range(2,n,1):
		if n%i==0:
			n+=1
			break
	else:
		print(n)
		break
	a+=1