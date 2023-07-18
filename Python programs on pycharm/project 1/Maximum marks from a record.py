fh = open("Students.txt", "r")
lines = fh.readlines()
p = []
depart = input("Enter Department:")
c1 = 0
for k in lines:
    h = eval(k)
    c2 = int(h["Hs marks"])
    if (h["Department"] == depart):
        if (c2 > c1):
            c1 = c2
if (c1 == 0):
    print("Student's Record not found")
else:
    print(c1)
fh.close()
