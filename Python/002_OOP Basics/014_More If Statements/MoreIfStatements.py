from functools import singledispatch

@singledispatch
def getMax(number):
    return number

@getMax.register
def _(number1, number2): # Compares two numbers and returns the bigger one
    if(number1 > number2):
        result = number1
    else:
        result = number2
    return result

@getMax.register
def _(number1, number2, number3): # Does the same but with 3 numbers
    if(number1 >= number2 and number2 >= number3):
        result = number1
    elif(number2 >= number1 and number2 >= number3):
        result = number2
    else:
        result = number3

print(getMax(2, 5))
print(getMax(2, 5, 3))