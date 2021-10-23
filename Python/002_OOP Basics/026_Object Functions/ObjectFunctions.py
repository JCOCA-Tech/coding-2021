class Student:

    name = ""
    major = ""
    gpa = float(0)

    def __init__(self, name="No name", major="No major", gpa=0.0):
        print("\n[DEBUG]: Creating student object [\"", name, "\", \"", major, "\", \"", gpa, "\"]...")
        self.name = name
        self.major = major
        self.gpa = gpa
        print("[DEBUG]: Done")

    def hasHonors(self):
        if(self.gpa >= 3.5):
            return True
        else:
            return False

student1 = Student("Jim", "Business", 2.4)
student2 = Student("Pam", "Art", 3.6)
student3 = Student("Tom", "Art", 4.0)
student4 = Student("Sam", "Art", 5.0)

print("\nHas honors:\t", student1.hasHonors())
print("Has honors:\t", student2.hasHonors())
print("Has honors:\t", student3.hasHonors())
print("Has honors:\t", student4.hasHonors())