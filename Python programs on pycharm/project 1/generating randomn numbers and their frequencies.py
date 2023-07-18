import random as rand
dict1={"101:125":0,"126:150":0,"151:175":0,"176:200":0}
for i in range(0,100,1):
	num=rand.randint(101,201)
	if(num>=101 and num<126):
		dict1["101:125"]+=1
	elif(num>=126 and num<151):
		dict1["126:150"]+=1
	elif(num>=151 and num<=175):
		dict1["151:175"]+=1
	else:
		dict1["176:200"]+=1

print("output:")
print(dict1)