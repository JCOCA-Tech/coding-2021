#include <iostream>

/* Simple C++ program that uses switch statements */

using namespace std;

string getDayOfWeek(int);

int main()
{
    cout << getDayOfWeek(0) << endl;

    return 0;
}

string getDayOfWeek(int dayNum)
{
    string dayName;
    
    switch(dayNum)
    {
        case 0: // If dayNum is 0 execute this code
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default: // If it is none of the cases execute this code
            dayName = "[ERROR]: Invalid day number";
            break;
    }

    return dayName;
}