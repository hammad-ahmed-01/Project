# Author ===== Hammad Ahmed

from tkinter import *
from tkinter import messagebox
backg=Tk()
backg.title(' Tic-Tac-Toe ')
backg.configure(bg='red')
#...................................................................................

click = True
count = 0

def buttonfunc(but):
    global click,count
    if but['text'] == ' ' and click == True:
        but['text']='X'
        click= False
        count+=1
        winalert()
    elif but['text'] == ' ' and click == False:
        but['text']='O'
        click=True
        count+=1
        winalert()
    else:
        messagebox.showerror(' ERROR ERROR ',' the phuck man , Yu dun know how to play tictactoe')

#...................................................................................

        
def disable_all_button():
    but1.config(state=DISABLED)
    but2.config(state=DISABLED)
    but3.config(state=DISABLED)
    but4.config(state=DISABLED)
    but5.config(state=DISABLED)
    but6.config(state=DISABLED)
    but7.config(state=DISABLED)
    but8.config(state=DISABLED)
    but9.config(state=DISABLED)

#...................................................................................

listofXO=['X','O']

def winalert():
 global winer
 winer=False
 for i in listofXO:    
    if but1['text'] == i and but2['text'] == i and but3['text'] == i:
        but1.config(bg='yellow')
        but2.config(bg='yellow')
        but3.config(bg='yellow')
        winer=True
        messagebox.showinfo(' WIN ',f'{i} won !!!!')
        disable_all_button()

    elif but4['text'] == i and but5['text'] == i and but6['text'] == i:
        but4.config(bg='yellow')
        but5.config(bg='yellow')
        but6.config(bg='yellow')
        winer=True
        messagebox.showinfo(' WIN ',f'{i} won !!!!')
        disable_all_button()

    elif but7['text'] == i and but8['text'] == i and but9['text'] == i:
        but7.config(bg='yellow')
        but8.config(bg='yellow')
        but9.config(bg='yellow')
        winer=True
        messagebox.showinfo(' WIN ',f'{i} won !!!!')
        disable_all_button()

    elif but1['text'] == i and but4['text'] == i and but7['text'] == i:
        but1.config(bg='yellow')
        but4.config(bg='yellow')
        but7.config(bg='yellow')
        winer=True
        messagebox.showinfo(' WIN ',f'{i} won !!!!')
        disable_all_button()

    elif but2['text'] == i and but5['text'] == i and but8['text'] == i:
        but2.config(bg='yellow')
        but5.config(bg='yellow')
        but8.config(bg='yellow')
        winer=True
        messagebox.showinfo(' WIN ',f'{i} won !!!!')
        disable_all_button()

    elif but3['text'] == i and but6['text'] == i and but9['text'] == i:
        but3.config(bg='yellow')
        but6.config(bg='yellow')
        but9.config(bg='yellow')
        winer=True
        messagebox.showinfo(' WIN ',f'{i} won !!!!')
        disable_all_button()

    elif but1['text'] == i and but5['text'] == i and but9['text'] == i:
        but1.config(bg='yellow')
        but5.config(bg='yellow')
        but9.config(bg='yellow')
        winer=True
        messagebox.showinfo(' WIN ',f'{i} won !!!!')
        disable_all_button()

    elif but3['text'] == i and but5['text'] == i and but7['text'] == i:
        but3.config(bg='yellow')
        but5.config(bg='yellow')
        but7.config(bg='yellow')
        winer=True
        messagebox.showinfo(' WIN ',f'{i} won !!!!')
        disable_all_button()
 if count == 9 and winer == False:
        messagebox.showinfo(' TIE ',' Both O and X didnt win !!!!')
        disable_all_button()

#................................................................................................
        
but1=Button(backg,text=' ', height=5, width=10, bg='black', font='Helvetica', fg='red', command=lambda: buttonfunc(but1))
but2=Button(backg,text=' ', height=5, width=10, bg='black', font='Helvetica', fg='red', command=lambda: buttonfunc(but2))
but3=Button(backg,text=' ', height=5, width=10, bg='black', font='Helvetica', fg='red', command=lambda: buttonfunc(but3))
but4=Button(backg,text=' ', height=5, width=10, bg='black', font='Helvetica', fg='red', command=lambda: buttonfunc(but4))
but5=Button(backg,text=' ', height=5, width=10, bg='black', font='Helvetica', fg='red', command=lambda: buttonfunc(but5))
but6=Button(backg,text=' ', height=5, width=10, bg='black', font='Helvetica', fg='red', command=lambda: buttonfunc(but6))
but7=Button(backg,text=' ', height=5, width=10, bg='black', font='Helvetica', fg='red', command=lambda: buttonfunc(but7))
but8=Button(backg,text=' ', height=5, width=10, bg='black', font='Helvetica', fg='red', command=lambda: buttonfunc(but8))
but9=Button(backg,text=' ', height=5, width=10, bg='black', font='Helvetica', fg='red', command=lambda: buttonfunc(but9))

#................................................................................................

but1.grid(row=0, column=0)
but2.grid(row=0, column=1)
but3.grid(row=0, column=2)

but4.grid(row=1, column=0)
but5.grid(row=1, column=1)
but6.grid(row=1, column=2)

but7.grid(row=2, column=0)
but8.grid(row=2, column=1)
but9.grid(row=2, column=2)

backg.mainloop()
