#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    int row = 1;

    while (row <= n)
    {
        int col = n - row + 1; // 4-1+1 = 4  => 4321
                               // 4-2+1 = 3  => 321
                               // 4-3+1 = 2  => 21
                               // 4-3+1 = 1  => 1
        while (col)
        {
            cout << "*";
            // cout <<col;
            col--;
        }
        row++;
        cout << endl;
    }
    return 0;
}
