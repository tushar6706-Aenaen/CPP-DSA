#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int row = 1; 
    while(row<=n){
        
        for(int col =1 ; col<=n;col++){
            
            char count = 'A' + row+col -2 ;
            cout<<count;
            
        }
        row++;
        cout<<endl;
    }
    return 0;
}