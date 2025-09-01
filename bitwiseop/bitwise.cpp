#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;
    cout << "a&b : " << (a & b) << endl;
    cout << "a|b : " << (a | b) << endl;
    cout << "~a : " << (~a) << endl; // 4 = 100 =>000000....0100 =>111111....1011 , 1'S 000000....0100 2'S 000000....0100 +1 000000....0101 , -1 111111....1011 SO ITS -5
    cout << "a^b : " << (a ^ b) << endl;
    /*
         4=100
         6=110
           010 = 2
     */

    return 0;
}