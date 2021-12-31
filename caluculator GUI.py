from tkinter import *

root = Tk()
root.resizable(0, 0)
root.title("Addition calculator")
e = ''


def B_A(i):
    global e
    if i!='C':
        e=e+str(i)
    else:
        e=''
    E.delete(0, END)
    E.insert(0, e)
    return


def r():
    global e
    E.delete(0, END)
    E.insert(0, str(eval(e)))
    e = ""


if __name__ == '__main__':
    E = StringVar()
    E = Entry(root, width=30, borderwidth=6, )
    E.grid(row=0, column=1, columnspan=30, padx=10, pady=10)
    b1 = Button(root, text='1', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A(1)).grid(row=3, column=1)
    b2 = Button(root, text='2', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A(2)).grid(row=3, column=2)
    b3 = Button(root, text='3', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A(3)).grid(row=3, column=3)
    b4 = Button(root, text='4', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A(4)).grid(row=2, column=1)
    b5 = Button(root, text='5', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A(5)).grid(row=2, column=2)
    b6 = Button(root, text='6', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A(6)).grid(row=2, column=3)
    b7 = Button(root, text='7', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A(7)).grid(row=1, column=1)
    b8 = Button(root, text='8', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A(8)).grid(row=1, column=2)
    b9 = Button(root, text='9', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A(9)).grid(row=1, column=3)
    b0 = Button(root, text='0', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A(0)).grid(row=4, column=2)
    bc = Button(root, text='C', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A('C')).grid(row=4,column=1)
    be = Button(root, text='=', padx=20, pady=20, fg='yellow', bg='black', command=lambda: r()).grid(row=4, column=3)
    ba = Button(root, text='+', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A('+')).grid(row=1,column=4)
    bs = Button(root, text='-', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A('-')).grid(row=2,column=4)
    bm = Button(root, text='*', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A('*')).grid(row=3,column=4)
    bd = Button(root, text='/', padx=20, pady=20, fg='yellow', bg='black', command=lambda: B_A('/')).grid(row=4,column=4)
    root.mainloop()
