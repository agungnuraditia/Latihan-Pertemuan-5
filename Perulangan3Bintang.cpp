#include <iostream>
using namespace std;
int main()
{
      int  x, y;
      int n = 3;
      for (x = 1; x <= n; x++)
      {
      for (y = 1; y <= x; y++)
      {
      cout << "* ";
      }      
      cout << "\n";
      }
      return 0;
}