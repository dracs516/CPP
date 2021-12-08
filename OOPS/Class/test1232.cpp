#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(void);
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void print()
    {
        cout << "(" << x << "," << y << ")\n";
    }
    point::point(void)
    {
        x = 0;
        y = 0;
    }
};
int main()
{
    point t;
    point q(10, 20);
    point r(23, 45);
    t.print();

    r.print();

    q.print();
    return 0;
}