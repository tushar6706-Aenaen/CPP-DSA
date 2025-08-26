#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    
    int j = 1;
    while (i <= n)
    {
        
        while (j <= i)
        {
            
            cout << j << " ";
            j++;
        }
        j = 1;
        i++;
        cout << endl;
    }
    return 0;
}