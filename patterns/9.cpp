#include<iostream>
using namespace std;

int main()
{
    int   n = 4  ;
    int  row = 1;
    while(row<=n){
        
        for(int col = 1 ; col<=n;col++)
        {
            char ch = 'A'+row-1;
            cout<<ch<<" ";
        }
        cout<<endl;
        row++;
    }
    return 0;
}   