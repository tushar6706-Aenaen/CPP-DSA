#include <iostream>
using namespace std;
int main()
{
    int n=4;
    int i = 1 ; 
    while(i<=n){
        for(int j=1;j<=n;j++){
            cout<<n-j+1;
        }
        i++;
        cout<<endl;
    }
    return 0;
}