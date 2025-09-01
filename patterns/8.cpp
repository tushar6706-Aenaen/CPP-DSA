#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int row = 1;
    
    while (row <= n)
    {
        int col = 1;
        for(col=1 ; col<=row ;col++){
            cout<<row-col+1<<" ";
        }
        row++;
        cout<<endl;
    }

    return 0;
}