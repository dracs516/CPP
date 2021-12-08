#include <iostream>
using namespace std;

class calculator;

class complex
{
    int a, b;
    friend class calculator;

public:
    void getData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

class calculator
{
public:
    int sumRealNumber(complex, complex);
    int sumCompNumber(complex, complex);
};
int calculator::sumRealNumber(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumCompNumber(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.getData(1, 4);
    o2.getData(5, 6);
    calculator calc;
    int real = calc.sumRealNumber(o1, o2);
    int comp = calc.sumCompNumber(o1, o2);

    cout << "New complex no. is " << real << " + " << comp << "i";
    return 0;
}