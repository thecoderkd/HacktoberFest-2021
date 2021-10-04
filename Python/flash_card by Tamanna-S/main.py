from tkinter import *
import pandas
import random

from pandas.core.frame import DataFrame

BG_COLOR = "#FDD2BF"
current_card = {}
to_learn = {}

try:
    data = pandas.read_csv("data/words_to_learn.csv")

except FileNotFoundError:
    orignal_data = pandas.read_csv("data/Eng-hi.csv")
    to_learn = orignal_data.to_dict(orient= "records")
    

else:
    to_learn = data.to_dict(orient= "records")

def next_card():
    global current_card, flip_timer
    window.after_cancel(flip_timer)
    current_card = random.choice(to_learn)
    canvas.itemconfig(card_title, text= "English")
    canvas.itemconfig(crad_word, text= current_card["English"])
    canvas.itemconfig(card_background, image= card_front_image)
    flip_timer = window.after(3000, func=flip_card)


def flip_card():
    canvas.itemconfig(card_title, text="Hindi")
    canvas.itemconfig(crad_word, text= current_card["Hindi"])
    canvas.itemconfig(card_background, image= card_back_image)

def is_known():
    to_learn.remove(current_card)
    print(len(to_learn))
    data = pandas.DataFrame(to_learn)
    data.to_csv("data/words_to_learn.csv",index=False)
    next_card()






#---------------------------------------USER INTERFACE----------------------------------------------------------#

window = Tk()
window.title("Flashing of Cards..")
window.config(padx=50, pady=30, bg=BG_COLOR)

flip_timer = window.after(3000, func=flip_card)

canvas = Canvas(width=800, height=600)
canvas.config( bg=BG_COLOR, highlightthickness=0)
card_front_image = PhotoImage(file="images/card_front.png")
card_back_image = PhotoImage(file="images/card_back.png")
card_background = canvas.create_image(400,300, image=card_front_image)
card_title = canvas.create_text(400,100, text="title", font=("Ariel", 40, "italic"))
crad_word = canvas.create_text(400,300, text="word", font=("Ariel", 60, "bold") )
canvas.grid(row=0, column=0, columnspan=2)


cross_image = PhotoImage(file= "images/wrong.png")
cross_botton = Button(image=cross_image, highlightthickness=0, command=next_card)
cross_botton.grid(row=1, column=0)

right_image = PhotoImage(file="images/right.png")
right_button = Button(image=right_image, highlightthickness=0, command=is_known)
right_button.grid(row=1, column=1)

next_card()













window.mainloop()