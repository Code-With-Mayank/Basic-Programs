file= open("Demo.txt",'w')
file.write("This is the write command.")
file.write("\nIt allows us to program on python")
file= open("Demo.txt",'rb')

file.seek(10,1)
print(file.read(7))
file.close