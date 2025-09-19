#include <iostream>
using namespace std;

void print(int n)
{
    int space = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2 * n - i;
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }
        // SPACE
        for (int j = 1; j <= space; j++)
        {
            cout << "- ";
        }
        if (i >= n)
            space += 2;
        else
            space -= 2;
        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    print(n);
    return 0;
}
