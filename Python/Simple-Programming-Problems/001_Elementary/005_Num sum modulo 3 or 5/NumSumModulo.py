#!/bin/python3

"""
Task:
Modify the previous program such that only multiples of three or five are considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17
"""

numberBuffer=0
isDebug=False

numberBuffer=int(input("Enter an integer: "))

sum=0
for i in range(numberBuffer):
    if((i%3==0)or(i%5==0)):
        if(isDebug):
            print(f"[DEBUG]: Sum is {sum} + {i}")
        sum+=i
    else:
        continue

print(f"The sum of all numbers that are multiples of 3 or 5 in {numberBuffer} is: {sum} \n")