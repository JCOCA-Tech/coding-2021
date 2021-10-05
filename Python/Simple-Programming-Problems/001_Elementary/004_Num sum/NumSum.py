#!/bin/python3

"""
Task:
Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
"""

numberBuffer=0
isDebug=False

numberBuffer=int(input("Enter an integer: "))

sum=0
for i in range(numberBuffer):
    if(isDebug):
        print(f"[DEBUG]: Sum is {sum} + {i}")
    sum+=i

print(f"The sum of all numbers in {numberBuffer} is: {sum}")