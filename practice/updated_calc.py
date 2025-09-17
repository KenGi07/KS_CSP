
def monthly(finances):
    finances=int(input("what is your monthly"+""+finances))
    return finances

income=monthly(" income")
rent=monthly(" rent")
utilities=monthly(" utilities")
groceries=monthly(" groceries")
transport=monthly(" transport")

def calculate(result):
    result=round(result/income*100)
    return result

calculate(rent)
print("Your monthly rent is" ,rent, f"and it is {calculate(rent)}% of your income")
calculate(utilities)
print ("Your monthly utilites are" ,utilities, f"and it is {calculate(utilities)}% of your income")
calculate(groceries)
print ("Your monthly groceries are" ,groceries, f"and it is {calculate(groceries)}% of your income")
calculate(transport)
print ("Your monthly transport is",transport, f"and it is {calculate(transport)}% of your income")