def getDayOfWeek(dayNum):
    if(dayNum == 0): # If dayNum is 0 execute this code
        return "Sunday"
    elif(dayNum == 1):
        return "Monday"
    elif(dayNum == 2):
        return "Tuesday"
    elif(dayNum == 3):
        return "Wednesday"
    elif(dayNum == 4):
        return "Thursday"
    elif(dayNum == 5):
        return "Friday"
    elif(dayNum == 6):
        return "Saturday"
    else: # If it is none of the cases execute this code
        return "[ERROR]: Invalid day number"

print(getDayOfWeek(0))