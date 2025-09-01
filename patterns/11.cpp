#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int row = 1; 
    char count = 'A';
    while(row<=n){

        for(int col =1 ; col<=n;col++){
            cout<<count;
            count++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}