#include <iostream>
using namespace std;

int main()
{
    int i = 5, &r1 = i;
    double d = 7, &r2 = d;

    // r2 = 3.14159;
    // r2 = r1;
    // i = r2;
    // r1 = d;
    cout << &r2 << endl;

    cout << &i << endl;
    cout << &d << endl;
    cout << i << endl;
    cout << r1 << endl;
    cout << &r1 << endl;
    cout << d << endl;
    cout << r2 << endl;
    cout << &r2 << endl;
    return 0;
}