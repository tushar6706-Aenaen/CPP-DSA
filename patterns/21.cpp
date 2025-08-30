#include<iostream>
using namespace std;

int main()
{
    
    int n = 5;
    int i = 1 ;
    while(i<=n){
       int j = n - i + 1;
       int count = 1; 
        while(j){
            cout<< count;
            count ++;
            j--;
        }
        int star1 = 2  ;
        while(star1<=i){
            cout<<"*";
            star1++;
        }

        int star2 = 2 ;
        while(star2<=i){
            cout<<"*";
            star2++;
        }

        int j2 = n -i +1 ;
        while(j2){
            cout<<j2;
            j2--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}