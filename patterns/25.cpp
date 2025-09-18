#include <iostream>
using namespace std;
// main formula (2*i+1) /2  = 2 * 0 +1 /2 = 0.5   so its 0 after cut off   j <= breakpoint  1 <= 0  no then -- but  arent gonna do other iteration on j because we only  want to print 1 IN FIRST LINE 
            //  (2*i+1) /2  = 2 * 1 +1 /2 = 1.5   so its 1 after cut off   j <= breakpoint  1 <= 1 yes then ch++ so it will be B
// you can use this for numbers pettern   fml 2*i+1
// example for understanding (for me) 2 * 2 + 1 =  5 i will print = 12345

void print(int n)
{

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 1; j <= n - i - 1; j++) // 5-0-1 = 4
        {
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
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