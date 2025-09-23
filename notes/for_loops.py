# KS 6th time for loops and notes

import datetime


current= datetime.datetime.now()
hour=current.hour

#print(f"the time seconds since Jan 1, 1970: {epoch}")
print(f"the time is: {current}")
print(f"the hour is: {hour}")

# lists
siblings=["kenji", "saori", "eiki"]
print(siblings[1])
print(siblings)
siblings[2]= "saori"
siblings[1]= "eiki"
siblings.remove("kenji")
print(siblings)
# What is a loop? 
    # a continous code that repeats
# What are the two types of loops?
    # for loop, while loop
# What is iteration
    # keeps track of loop number,
# What are lists? 
    # multiple items in a variable
# How do you make lists in python? 
    # you do variable=["kenji", "saori", "eiki"]
# How do you make for loops in python? 
    
for sibling in siblings:
    #print(f"Hello {sibling}")
    print("hi")

for x in range(20,1,-1):
    print(x)

# How do you make while loops in python?

#while True:
    #print("Oh NO!")


i = 1

while i < 21:
    if i%2==0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")
    i+= 1

import random

number= random.randint(1,20)
x=1
#while x != number:
    #print("duck")
    #x+=1

#print("goose!")

while True:
    if number==x:
        print("goose")
        break
    else:
        print("duck")
        x+=1