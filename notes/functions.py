# KS 6th Function notes

import random

def welcome():
    name=input("what is your name\n")
    print(f"hello {name}!")

print(f"the function is over!")

welcome()
welcome()
welcome()
welcome()
welcome()
welcome()


def add(number, number_two): #Parameters given when we define the function
    number=number+number_two
num_one=12
num_two=14
add(num_one) #Arguments are given we call the function
add(4, 8)
add(9, 41)
add(67, 21)


def clean(info):
   return+ info.strip().lower()

name= input("what is your name")
quest= input("what is your quest")
color= input("what is your favorite color")

print(f"hello, {clean(name)}. I heard that you are trying to {clean(quest)}, thats super cool. Is your favorite color {clean(color)} are you sure about it.")