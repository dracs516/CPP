#include <iostream>
#include <math.h>
using namespace std;

class point
{
    float x, y;

public:
    friend void distance(point a, point b);
    point(float a, float b)
    {
        x = a;
        y = b;
    }
    point(void)
    {
        x = 0.0f;
        y = 0.0f;
    }
    void printPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};

//as a friend function
void distance(point a, point b)
{
    float res = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
    cout << "The distance between the two points is: " << res << endl;
}

int main()
{
    point a(1, 1);
    point b(5, 6);
    point c;
    a.printPoint();
    b.printPoint();
    distance(a, b);
    //c.distance(a, b);//as a member function
    return 0;
}