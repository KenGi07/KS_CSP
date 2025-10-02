# KS 6th Fizz Buzz

i = 1

while i < 51:
    if i%3==0 and i%5==0:
        print(f"fizzbuzz")
    elif i%3==0:
        print(f"fizz")
    elif 1%5==0:
        print("buzz")
    else:
        print(i)
    i+=1