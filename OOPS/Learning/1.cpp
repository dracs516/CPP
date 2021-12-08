#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;

public:
    int usn;
    string section;

    student(string s, int u, string sec)
    {
        name = s;
        usn = u;
        section = sec;
    }

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << name << endl;
    }

    void print()
    {
        cout << "--------------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "USN: " << usn << endl;
        cout << "Section: " << section << endl;
    }
};

int main()
{
    //student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << "Name: ";

    //     cin >> s; //cin >> arr[i].name;
    //     arr[i].setName(s);
    //     cout << "USN: ";
    //     cin >> arr[i].usn;
    //     cout << "Section: ";
    //     cin >> arr[i].section;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].print();
    //     //arr[i].getName();
    // }

    student a("Abhay", 193, "D");
    a.print();
    return 0;
}