#!/bin/python3

"""
Task:
Write a program that asks the user for a number n and gives them the possibility to choose between computing the sum and computing the product of 1,…,n.
"""

running=True
isDebug=True

numberBuffer=0

def getNumber():
    numberBuffer=int(input("Enter a number: "))
    return numberBuffer

def SigmaSum(end):
        sum=0
        for i in range(end+1):
            sum+=i
        return sum

def SigmaProduct(end):
    product=1
    for i in range(end+1):
        if(i>0):
            product=product*i
    return product

numberBuffer=getNumber()

while(running):

    print(f"""
        ====    ====    ====    ====    ====    ====    ====
    ====    ====    ====    ====    ====    ====    ====    ====

    Your number is {numberBuffer}.

        ====    ====    ====    ====    ====    ====    ====
    
    Select what to do with your number:

        1) Calculate sum of all numbers in {numberBuffer}.

        2) Calculate product of all numbers in {numberBuffer}.
        
        3) Change number.
        
        4) Exit.

    ====    ====    ====    ====    ====    ====    ====    ====
        ====    ====    ====    ====    ====    ====    ====
    """)
    selection=int(input("Enter selection number: "))

    
    if(selection==1):
        print(f"Sum of numbers in {numberBuffer}:\t{SigmaSum(numberBuffer)}")

    elif(selection==2):
        print(f"Product of numbers in {numberBuffer}:\t{SigmaProduct(numberBuffer)}")

    elif(selection==3):
        numberBuffer=getNumber()
        continue
    
    elif(selection==4):
        print("[Exit]")
        exit()

    else:
        continue