f= open("Poem.txt","r")
word=input("Enter word to find occurence:")
c=0
for line in f:
    words=line.split()
    for i in words:
        if(i==word):
            c=c+1
print("Occurences =:",c)
f.close()


