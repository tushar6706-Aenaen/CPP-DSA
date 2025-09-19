#include <iostream>
using namespace std;



/*               0  1  2  3  4  5  6

0                4  4  4  4  4  4  4
1                4  3  3  3  3  3  4
2                4  3  2  2  2  3  4
3                4  3  2  1  2  3  4
4                4  3  2  2  2  3  4
5                4  3  3  3  3  3  4
6                4  4  4  4  4  4  4


*/

/*      EXPLAINATION 

            int top = i; 0
            int left = j; 0
            int right = (2 * n - 2) - j;  = 2 * 4 - 2 -0 = 6   
            int bottom = (2 * n - 2) - i;2 * 4 - 2 -0 = 6
            cout << (n - min(min(top, bottom), min(left, right)))<<"  ";  (4 - min(min(0, 6), min(0, 6))) 4- 0 = 4 ;



            int top = i; 0
            int left = j; 1
            int right = (2 * n - 2) - j;  = 2 * 4 - 2 -1 = 5   
            int bottom = (2 * n - 2) - i;2 * 4 - 2 -0 = 6
            cout << (n - min(min(top, bottom), min(left, right)))<<"  ";  (4 - min(min(0, 6), min(1, 5))) MIN (0,1) 4- 0 = 4 ;
            

            So the first line will always be 4 because i = 0. Since we are taking the minimum value, we get n (4) - min(0) = 4.
            
            

            1,1

            int top = i; 1
            int left = j; 1
            int right = (2 * n - 2) - j;  = 2 * 4 - 2 -1 = 5   
            int bottom = (2 * n - 2) - i;2 * 4 - 2 -1 = 5
            cout << (n - min(min(top, bottom), min(left, right)))<<"  ";  (4 - min(min(1, 6), min(1, 5))) MIN (1,1) 4- 1 = 3 ;
            4  4  4  4  4  4  4  
            4  #  3  3  3  3  4  
            4  3  2  2  2  3  4  
            4  3  2  1  2  3  4  
            4  3  2  2  2  3  4  
            4  3  3  3  3  3  4  
            4  4  4  4  4  4  4 
            So the second line of 1,1 will always be 4 because i = 0. Since we are taking the minimum value, we get n (4) - min(0) = 4.



            2,2
            int top = i; 2
            int left = j; 2
            int right = (2 * n - 2) - j;  = 2 * 4 - 2 -2 = 4   
            int bottom = (2 * n - 2) - i;2 * 4 - 2 -2 = 4
            cout << (n - min(min(top, bottom), min(left, right)))<<"  ";  (4 - min(min(1, 6), min(1, 5))) MIN (1,1) 4- 2 = 2 ;

            lets take some diff values for better understanding 

            i = 5 , j = 4


            int top = i; 5
            int left = j; 4
            int right = (2 * n - 2) - j;  = 2 * 4 - 2 -4 = 2   
            int bottom = (2 * n - 2) - i;2 * 4 - 2 -5 = 1
            cout << (n - min(min(top, bottom), min(left, right)))<<"  "; 
                    (4 - min(min(5,1), min(4, 2))) MIN (1,2) 4- 1 = 3 ;

            5,4 will be 3 scroll up and check it 
            .....


*/


void print(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;
            cout << (n - min(min(top, bottom), min(left, right))) << "  ";
        }
        cout << endl;
    }
}
int main()
{

    int n = 4;
    print(n);
    return 0;
}