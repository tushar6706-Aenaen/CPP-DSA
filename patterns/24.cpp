#include <iostream>
using namespace std;
// main fml  2* (n - 1)  
// example lets take 4 for n   2* (n - 1)  =  2 * (4-1) = 2 * 3 = 6  so there will be  6 space in first line the space -=2 ;  -2 after every iteration

void print(int n)
{
//     1------1
//     12----21
//     123--321
//     12344321

    int space = 2* (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << "-";
        }

        // number
  
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
int main()
{

    int n = 5;
    print(n);

    return 0;
}