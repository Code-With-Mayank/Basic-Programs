def prime_factors(num):
    l=[]
    for i in range(2,num+1):
        if num%i==0:
            isprime=1
            for j in range(2,(i//2 +1)):
                if i%j==0:
                    isprime=0
                    break
            if isprime==1:
                l.append(i)
    return l

d={}
keys=[]
lim=int(input("\nEnter the limit:"))
for i in range(lim):
    keys.insert(i,int(input("Enter your integer:")))
for i in keys:
    values=[]
    values=prime_factors(i)
    d[i]=values
print("\n",d,"\n")