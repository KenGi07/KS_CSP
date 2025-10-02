# KS 6th time assignment 

import datetime


current = datetime.datetime.now()
time = current.hour

if time >= 18:
    print(f"Hello the time is {time}, good night")


elif time > 12 and time < 18:
    print(f"Hello The time is {time}, good afternoon")


elif time >= 1 and time < 12:
    print(f"Hello the time is {time}, good morning")