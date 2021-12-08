// Create a class called time that has separate int member data for hours, minutes and
// seconds. One constructor should initialize this data to 0, and another should
// initialize it to fixed values. Another member function should display it, in 11:59:59
// format. The final member function should add two objects of type time passed as
// arguments. And also use operator overloading concept to show add operation.
// A main () program should create two initialized time objects, and one that isn’t
// initialized. Then it should add the two initialized values together, leaving the result
// in the third time variable. Finally it should display the value of the third variable.

#include <iostream>
using namespace std;

class timeformat
{
public:
    int hours;
    int minutes;
    int seconds;

    timeformat()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
        // hours = x;
        // minutes = y;
        // seconds = z;
    }

    timeformat(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void printTime()
    {
        cout << "The time is: " << hours << ":" << minutes << ":" << seconds << endl;
    }

    void add(timeformat &t1, timeformat &t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = seconds / 60;
        seconds = seconds % 60;
        minutes = minutes + t1.minutes + t2.minutes;
        hours = minutes / 60;
        minutes = minutes % 60;
        hours = hours + t1.hours + t2.hours;
    }
};

int main()
{
    timeformat t1(23, 56, 34);
    timeformat t2(12, 59, 59);
    timeformat t3;
    t1.printTime();
    t2.printTime();
    t3.add(t1, t2);
    t3.printTime();
    return 0;
}