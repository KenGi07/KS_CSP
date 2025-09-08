# KS 6th financial calculator

income=int(input("Enter monthly income\n"))

rent=int(input("Whats your rent/mortage\n"))

utmonth=int(input("what is your monthly utilities\n"))

grmonth=int(input("How much do you pay in groceries monthly\n"))

trmonth=int(input("What is your monthly transportation\n"))

percentage1= (rent/income)*100

percentage2= (utmonth/income)*100

percentage3= (grmonth/income)*100

percentage4= (trmonth/income)*100

total=income-(rent+utmonth+grmonth+trmonth)

print("Your rent is",rent, "and that is",round(percentage1), "%")

print("Your utillies is", utmonth, "and that is",round(percentage2), "%")

print("Your groceries is", grmonth, "and that is",round(percentage3), "%")

print("Your transportation is", trmonth, "and that is",round(percentage4), "%")

print("You have",total, "to spend/save every month")
