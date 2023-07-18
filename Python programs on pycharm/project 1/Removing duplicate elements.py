l=[]
lim=int(input("\nEnter the limit:"))
for i in range(lim):
    l.insert(i,int(input("Enter your element:")))
print(f"\nOriginal list:{l}")
l=list(set(l))
print(f"\nList after removing duplicate elements:{l}\n")