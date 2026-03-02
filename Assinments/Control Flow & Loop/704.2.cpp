#include <iostream>
using namespace std;

int main()
{
  for(int i = 0; i < 19; i += 2)
  {
    if(i > 8 && i < 14)
    continue;
    cout << i << endl;
  }

  cout << "=======\n";

  int j = -2;
  while(j > -3)
  {
    j += 2;
    if(j > 8 && j < 14)
    continue;
    if(j > 18)
    break;
    cout << j << endl;
  }
  
  // Output Needed
  // 0
  // 2
  // 4
  // 6
  // 8
  // 14
  // 16
  // 18
  
  return 0;
}