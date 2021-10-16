#include <iostream>

/* Simple C++ program that uses object functions */

using namespace std;

class Student
{
    public:
        string name;
        string major;
        double gpa;
        Student(string argName, string argMajor, double argGPA)
        {
            cout << "[DEBUG]: Creating object [\"" << argName << "\",\"" << argName << "\", \"" << argName << "\"]..." << endl;
            name = argName;
            major = argMajor;
            gpa = argGPA;
        }

        bool hasHonors()
        {
            if(gpa >= 3.5)
            {
                return true;
            } else {
                return false;
            }
        }

};

int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);
    Student student3("Tom", "Art", 4.0);
    Student student4("Sam", "Art", 5.0);
    
    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;
    cout << student3.hasHonors() << endl;

    return 0;
}
