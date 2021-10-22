number1 = input("Enter first number: ")
op = input("Enter operator: ")
number2 = input("Enter second number: ")

if(op == '+'): # compare to known operators
    result = number1 + number2
elif(op == '-'):
    result = number1 - number2
elif(op == '*'):
    result = number1 * number2
elif(op == '/'):
    result = number1 / number2
else:
    print("[ERROR]: Invalid Operator")

if(result): # Check if result was initialized
    print("Result: ",result)
