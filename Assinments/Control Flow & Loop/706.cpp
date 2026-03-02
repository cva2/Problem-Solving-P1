#include <iostream>
using namespace std;

int main()
{
  for(int i = 10; i < 100000001; i *= i)
  {
    cout << i << endl;
  }
  
  return 0;
}