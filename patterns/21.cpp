#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    int i = 1;
    while (i <= n)
    {
        int j = n - i + 1; // 4-1+1 = 4  => 4321
                           // 4-2+1 = 3  => 321
                           // 4-3+1 = 2  => 21
                           // 4-3+1 = 1  => 1
        int count = 1; 
        while (j)
        {
            cout << count;
            count++;
            j--;
        }
        int star1 = 2;
        while (star1 <= i)
        {
            cout << "*";
            star1++;
        }

        int star2 = 2;
        while (star2 <= i)
        {
            cout << "*";
            star2++;
        }

        int j2 = n - i + 1; // 4-1+1 = 4  => 4321
                            // 4-2+1 = 3  => 321
                            // 4-3+1 = 2  => 21
                            // 4-3+1 = 1  => 1
        while (j2)
        {
            cout << j2; 
            j2--;
        }
        i++;
        cout << endl;
    }
    return 0;
}