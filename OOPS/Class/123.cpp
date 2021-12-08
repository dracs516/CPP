#include <iostream>
using namespace std;

class matrix
{
    int n, m;
    int mat[10][10];

public:
    void read(int r, int c)
    {
        n = r;
        m = c;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "Enter the data at " << i + 1 << " * " << j + 1 << endl;
                cin >> mat[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend matrix transpose(matrix mat, int, int);
};
