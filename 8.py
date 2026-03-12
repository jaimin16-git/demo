pwd=input("Enter the password: ")
i=0
c=0
sp="!@#^*()_+-=$"
while i<len(pwd):
	if pwd[i] in ("%","&",'' ' ' ''):
		print(f"Forbidden character '{pwd[i]}' found")
		break
	i+=1
else:
	if(len(pwd)<8):
		print("Password too short")
	elif(len(pwd)>8):
		while(i<len(pwd)):
			if(pwd[i].isupper()):
				c+=1
				break
			i+=1
		while(i<len(pwd)):
			if(pwd[i].islower()):
				c+=1
				break
			i+=1
		while(i<len(pwd)):
			if(pwd[i].isdigit()):
				c+=1
				break
			i+=1
		for char in pwd:
			if char in sp:
				c+=1
				break
			i+=1
		if (c==4):
			print("Valid password")
		else:
			print("Invalid password")