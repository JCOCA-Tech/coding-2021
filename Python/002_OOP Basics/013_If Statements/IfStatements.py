isMale = False
isTall = True

"""
if(isMale): # Execute the following code if isMale is true
    print("You are a male")
else: # Otherwise execute this code
    print("You are not male")
"""

"""
if(isMale and isTall): # and is a binary AND operator. Execute this code if isMale and isTall are true
    print("You are a tall male")
else: # Otherwise execute this code
    print("You are not male")
"""

""" 
if(isMale or isTall): # or is a binary OR operator. Execute this code if isMale or isTall or both are true
    print("You are a tall or a male")
else: # Otherwise execute this code
    print("You are not tall or not male")
"""

if(isMale and isTall):
    print("You are a tall male")
elif(isMale and not isTall): # not is a negation operator
    print("You are a short male")
elif(not isMale and isTall): # not is a negation operator
    print("You are tall but not male")
else:
    print("You are not tall and not male") 