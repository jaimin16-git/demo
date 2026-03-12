import random
#secret_number stores the randomly generated number
secret_number=random.randint(1,20)

x=1
while  x>0:
	n=int(input("Guess a number between 1 and 20: "))
	if (n>secret_number):
		print("Too high")
	elif (n<secret_number):
		print("Too low")
	elif (n==secret_number):
		print("Perfect you got it in" ,x, "tries")
		break
	x+=1