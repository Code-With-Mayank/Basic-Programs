# Give size of list
print('Enter the range of list: ')
n=int (input ())
f=0
# Give list of numbers having size n
print('Enter the values to the list: ')
l=list(map(int,input().strip().split(' ')))
print ('Palindrome numbers in the list are: ')
# Check Number is palindrome or not
for i in l:
   num=str(i)
   if ("". join(reversed(num))==num):
     print(i)
     f=f+1

if(f==0):
    print('No palindrome in the list')