index = 1

"""
while(index <= 5): # Executes code only if condition is met
    print(index)
    index+=1
"""

while True:
    print(index)
    index+=1
    if(index > 5):
        print("[DEBUG]: Breaking")
        break