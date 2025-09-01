#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    cout<<"a<<1"<<(a<<1)<<endl; // 000000...0101 => 000000...1010 = 10 
    cout<<"a>>1"<<(a>>1)<<endl; // 000000...0101 => 000000...0010

    return 0;
}