import numpy # import additional math functions

"""
Operators
"""

print("Add constants:\t\t4 + 4 = ", 4 + 4) # Addition
print("Subtract constants:\t4 - 4 = ", 4 - 4) # Subtraction
print("Multiply constants:\t4 * 4 = ", 4 * 4) # Multiplication
print("Divide constants:\t4 / 4 = ", 4 / 4) # Division
print("Mod constants:\t\t4 % 4 = ", 4 % 4) # Modulo

"""
Increment and decrement integer variables
"""

wholeNumber = 5
decimalNumber = 5.5

print("Increment the integer ", wholeNumber, ":\t\t")
wholeNumber += 1 # Increment by 1
print(wholeNumber)

print("Negatively increment the integer ", wholeNumber, ":\t")
wholeNumber-=1 # Decrement by 1
print(wholeNumber)

"""
Increment decimal variables (float or doubles)
"""

print("Increment the decimal value", decimalNumber, ":\t\t")
decimalNumber+=1; # Increment by 1
print(decimalNumber)

print("Decrement the decimal value", decimalNumber, ":\t")
decimalNumber-=1 # Decrement by 1
print(decimalNumber)

"""
Variable operators on integers
"""

wholeNumber+=4; # Addition
print("Integer variable addition: \t\t", wholeNumber, " + 4 = ", wholeNumber)

wholeNumber-=4; # Subtraction
print("Integer variable subtraction: \t\t", wholeNumber, " - 4 = ", wholeNumber)

wholeNumber*=4; # Multiplication
print("Integer variable multiplication: \t", wholeNumber, " * 4 = ", wholeNumber)

wholeNumber/=4; # Division
print("Integer variable division: \t\t", wholeNumber, " / 4 = ", wholeNumber)

wholeNumber%=4; # Modulo
print("Integer variable modulo: \t\t", wholeNumber, " % 4 = ", wholeNumber)

"""
Variable operators on decimal numbers
"""

decimalNumber+=4; # Addition
print("Decimal variable addition: \t\t", decimalNumber, " + 4 = ", decimalNumber)

decimalNumber-=4; # Subtraction
print("Decimal Variable subtraction: \t\t", decimalNumber, " - 4 = ", decimalNumber)

decimalNumber*=4; # Multiplication
print("Decimal Variable multiplication: \t", decimalNumber, " * 4 = ", decimalNumber)

decimalNumber/=4; # Division
print("Decimal Variable division: \t\t", decimalNumber, " / 4 = ", decimalNumber)

"""
Common math functions
"""

print("pow(2,2):\t", pow(2,2)) # Raise x to the power of y
print("sqrt(36):\t", numpy.sqrt(36)) # Square root of x
print("round(4.6):\t", round(4.6)) # Round x
print("ceil(4.1):\t", numpy.ceil(4.1)) # Round everything up 
print("floor(4.6):\t", numpy.floor(4.6)) # Round everything down
print("fmax(3,10):\t", numpy.fmax(3,10)) # Determine if x or y is larger and return the larger number
print("fmin(3,10):\t", numpy.fmax(3,10)) # Determine if x or y is smaller and return the smaller number