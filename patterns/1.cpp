#include <iostream>
using namespace std;

int main()
{
  int n = 4;
  int i = 0;

  while (i <= n)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << j;
    }
    i++;
    cout << endl;
  }
  return 0;
}