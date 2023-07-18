from tkinter import *
from tkcalendar import *

root = Tk()
root.title('BPPIMT_CALENDER')
root.geometry("400x200")

cal = Calendar(root, selectmode="day", date_pattern="dd-mm-yyyy", year=2021, month =10, day=30)
cal.pack(pady=40)

def grab_date():
    my_label.config(text=" Selected Date is --> " + cal.get_date())

my_button = Button(root,text = "Get Date", command=grab_date)
my_button.pack(pady=40)

my_label = Label(root, text="")
my_label.pack(pady=30)

root.mainloop()