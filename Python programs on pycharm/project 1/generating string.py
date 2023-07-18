import string
import random

N=6
count1=0
count=0
print("The random generated strings is: ")
while count <=50:
	res = ''.join(random.choices(string.ascii_uppercase + string.ascii_letters  + string.digits, k = N))
	print(res)
	if res[5].isdigit()==True:
		if(res[4:5]=='0...9'):
			count1=count1 +1

		count+=1

print("\n The number of random generated strings that ends with two digits is:  ", count1)