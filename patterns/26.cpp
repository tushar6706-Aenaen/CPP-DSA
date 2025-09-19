#include <iostream>
using namespace std;


/*
    **********
    ****--****
    ***----***
    **------**
    *--------*
    *--------*
    **------**
    ***----***
    ****--****
    ********** 
    
*/
void print(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        // space

        for (int j = 0; j < space; j++)
        {
            cout << "-";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space += 2;
    }
}

void print2(int n)
{
    int space = 2 * (n-1);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // space

        for (int j = 0; j < space; j++)
        {
            cout << "-";
        }

        for (int j = 1; j <=  i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space -= 2;
    }
}
int main()
{

    int n = 5;
    print(n);
    print2(n);
    return 0;
}
