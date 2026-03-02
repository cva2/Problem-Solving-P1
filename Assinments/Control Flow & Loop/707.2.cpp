#include <iostream>
using namespace std;

int main()
{
  for(int i = 2; i < 129; i *= 2)
  {
    cout << i << endl;
  }

  int j = 2;
  while(j < 129)
  {
    cout << j << endl;
    j *= 2;
  }

  
  // Output Needed
  // 2
  // 4
  // 8
  // 16
  // 32
  // 64
  // 128
  
  return 0;
}