
import pickle
print("\t \t Creation and Manipulation Of Student's Data in a File \t \n")

#Accepting data for Dictionary
def insertRec():
    rollno = int(input("Enter Roll Number : "))
    name = input("Enter Name: ")
    address = input("Enter Address: ")
    phnno = int(input("Enter Phone Number: "))
    marks = int(input("Enter HS Marks: "))
    department = input("Enter Department : ")
    #Creating the dictionary
    rec = {"Roll NO.": rollno,"Name": name, "Address": address, "Phone Number": phnno, "HS Marks": marks, "Department": department}
    #Writing the dictionary
    f = open("Students.txt","ab")
    pickle.dump(rec,f)
    f.close()

#Reading the records
def readRec():
    f = open("Students.txt","rb")
    print(" \n !!!! Students Details  !!!! \n")
    while True:
        try:
            rec = pickle.load(f)
            print('----------------------------')
            print("Roll Number:",rec['Roll NO.'])
            print("Name:", rec["Name"])
            print("Address:", rec["Address"])
            print("Phone Number:", rec["Phone Number"])
            print("HS Marks:", rec["HS Marks"])
            print("Department:", rec["Department"])
            print('-----------------------------')
        except EOFError:
            break
    f.close()

#Updating data for a roll number
def updateMarks(r):
    f = open("Students.txt","rb")
    reclst = []
    while True:
        try:
            rec = pickle.load(f)
            reclst.append(rec)
        except EOFError:
            break
    f.close()
    for i in range(len(reclst)):
        if reclst[i]['Roll NO.'] == r:
            print("\nType:-\n 1.To Update Name\n 2.To Update Address\n 3.To Update Phone Number\n 4.To Update HS Marks\n 5.To Update Department\n ")
            ch = int(input("Enter Your Choice: "))
            if ch==1:
                n = input("Enter new updated Name: ")
                reclst[i]['Name'] = n
                break
            elif ch==2:
                a = input("Enter the new updated Address: ")
                reclst[i]['Address'] = a
                break
            elif ch==3:
                p = int(input("Enter new updated Phone Number: "))
                reclst[i]['Phone Number'] = p
                break
            elif ch==4:
                m = int(input("Enter new updated Marks: "))
                reclst[i]['HS Marks'] = m
                break
            elif ch==5:
                d = input("Enter new updated Department:")
                reclst[i]['Department'] = d
                break
            else:
                print("Invalid Choice")
        else:
            print("Entered roll is not in the directory")
    f = open("Students.txt","wb")
    for x in reclst:
        pickle.dump(x,f)

    print("--- DATA UPDATED ---")
    f.close()

#Deleting a record based on roll number
def deleteRec(r):
    f = open ("Students.txt","rb")
    reclst = []
    while True:
        try:
            rec = pickle.load(f)
            reclst.append(rec)
        except EOFError:
            break
    f.close()
    f = open("Students.txt","wb")
    for x in reclst:
        if x["Roll NO."] == r:
            continue
        pickle.dump(x, f)

    print("--- DATA DELETED SUCESSFULLY ---")
    f.close()

#Counting number of students in a particular department
def count():
    f = open("Students.txt", "rb")
    dept = input("Enter the Department (CSE/ECE/IT/EE) whose students count needed: ")
    c = 0
    reclst = []
    while True:
        try:
            rec = pickle.load(f)
            reclst.append(rec)
        except EOFError:
            break
    f.close()
    f = open("Students.txt", "rb")
    for x in reclst:
        if x["Department"] == dept:
            c=c+1
    f.close()
    print("The number of students in",dept ,"is: " ,c)

#Searching a record by roll
def searchbyRoll():
    f = open("Students.txt", "rb")
    flag = False
    r = int(input("Enter the RollNumber to search details: "))
    while True:
        try:
            rec = pickle.load(f)
            if rec["Roll NO."] == r:
               print('----------------------------')
               print("Roll Number:", rec['Roll NO.'])
               print("Name:", rec["Name"])
               print("Address:", rec["Address"])
               print("Phone Number:", rec["Phone Number"])
               print("HS Marks:", rec["HS Marks"])
               print("Department:", rec["Department"])
               print('-----------------------------')
               flag = True
        except EOFError:
            break
    if flag == False:
        print("No records found")
    f.close()

#Searching a record by name
def searchbyName():
    f = open("Students.txt", "rb")
    flag = False
    n = input("Enter the name to search details: ")
    while True:
        try:
            rec = pickle.load(f)
            if rec["Name"] == n:
               print('----------------------------')
               print("Roll Number:", rec['Roll NO.'])
               print("Name:", rec["Name"])
               print("Address:", rec["Address"])
               print("Phone Number:", rec["Phone Number"])
               print("HS Marks:", rec["HS Marks"])
               print("Department:", rec["Department"])
               print('-----------------------------')
               flag = True
        except EOFError:
            break
    if flag == False:
        print("No records found")
    f.close()

#main_Menu
while True:
        print('\n.......MENU.........')
        print('\nType:-\n1.Insert a record\n2.Display a record\n3.Update a record\n4.Delete a record\n5.Count a record\n6.Search a record\n0.EXIT')
        choice = int(input("Enter Your Choice: "))
        if choice ==0:
            print("Thank You")
            break
        elif choice==1:
          insertRec()
        elif choice==2:
           readRec()
        elif choice==3:
           r = int(input("Enter Roll Number to Update: "))
           updateMarks(r)
        elif choice==4:
             r = int(input("Enter Roll Number to Delete: "))
             deleteRec(r)
        elif choice==5:
              count()
        elif choice==6:
            print("\n1.Search by Roll\n2.Search by Name")
            ch = int(input("Enter Your Choice: "))
            if ch==1:
                searchbyRoll()
            elif ch==2:
                searchbyName()
            else:
                print("Invalid Choice")

