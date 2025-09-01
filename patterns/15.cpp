#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int i = 1;
    while (i <= 4)
    {
        int j = 1;
        while (j<=i)
        {
            char ch = 'A' + n-i + j - 1;
            cout<<ch ;
            j++;
        }
        i++;
        cout<<endl;
        
    }
    return 0;
}