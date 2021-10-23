# Python program that uses a selfdefined exponent function
def power(baseNumber, powerNumber): # exponent function
    result = 1
    for i in range(powerNumber):
        result = result * baseNumber
    return result

print(power(2, 3)) # Call the function and print the result