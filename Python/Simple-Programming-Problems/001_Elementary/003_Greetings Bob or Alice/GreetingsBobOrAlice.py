#!/bin/python3

"""
Task:
Modify the previous program such that only the users Alice and Bob are greeted with their names.
"""

nameBuffer=input("State your name: ")

if((nameBuffer=="Bob") or (nameBuffer=="Alice")):
    print(f"Greetings {nameBuffer}")
else:
    exit()