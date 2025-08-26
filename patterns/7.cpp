#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        count = i;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}