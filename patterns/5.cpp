#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    int i = 1 ;

    while(i<=n){
        for(int j = 1; j<=i;j++){
            cout<<i;
        }
        i++;
        cout<<endl;
    }
    return 0;
}