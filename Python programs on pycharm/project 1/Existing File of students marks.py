
file = open("Existing file.txt", "r")
file1 = open("New File.txt", "a")
existing = file.readlines()
print(existing)

for i in existing:
    num = i.split()
    sum = (int(num[1]) + int(num[2]) + int(num[3]) + int(num[4]) + int(num[5]))
    if (sum / 5 > 65):
        file1.writelines(i)

file1.write("\n")
file.close()
file1.close()
