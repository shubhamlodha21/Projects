 #Function Name:WeightConverter
#Description:Weight Converted kg into grams,pounds and Ounce
#Date: 24/08/2021
#Author: Shubham Lodha

from tkinter import *

window=Tk()
def from_kg():
    gram=float(e2_value.get())*1000
    pound=float(e2_value.get())*2.20
    ounce=float(e2_value.get())*35.27
    t1.delete("1.0",END)
    t1.insert(END,gram)
    t2.delete("1.0",END)
    t2.insert(END,pound)
    t3.delete("1.0",END)
    t3.insert(END,ounce)

e1=Label(window,text="Enter the Weight is KG")
e2_value=StringVar()
e2=Entry(window,textvariable=e2_value)
e3=Label(window,text="Gram")
e4=Label(window,text="Pound")
e5=Label(window,text="Ounce")

t1=Text(window,height=5, width=5)
t2=Text(window,height=5, width=5)
t3=Text(window,height=5, width=5)

b1=Button(window,text="Convert",command=from_kg)

e1.grid(row=0,column=0)
e2.grid(row=0,column=1)
e3.grid(row=1,column=0)
e4.grid(row=1,column=1)
e5.grid(row=1,column=2)
t1.grid(row=2,column=0)
t2.grid(row=2,column=1)
t3.grid(row=2,column=2)
b1.grid(row=0,column=2)

window.mainloop()




