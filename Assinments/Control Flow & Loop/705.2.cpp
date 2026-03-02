#include <iostream>
using namespace std;

int main()
{
  for(int i = 0; i < 29; i += 3)
  {
    cout << i << endl;
  }

  cout << "=======\n";

  int j = -3;
  while(j > -4)
  {
    j += 3;
    if(j > 28)
    break;
    cout << j << endl;
  }
  
  // Output Needed
  // 0
  // 3
  // 6
  // 9
  // 12
  // 15
  // 18
  // 21
  // 24
  // 27
  
  return 0;
}