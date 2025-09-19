# KS 6th time assignment 

time=int(input("whats the time in military time:"))

if time < 11:
    print(f"its {time}am Good morning")
elif time > 11:
    print(f"its {time}pm good afternoon")