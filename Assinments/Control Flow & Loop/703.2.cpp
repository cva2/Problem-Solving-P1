#include <iostream>
using namespace std;

int main()
{
  for(int i = 2; i < 129; i *= 2)
  {
    if(i == 2)
      continue;
    
    cout << i - 2 << endl;
  }

  int j = 2;
  while(j < 129)
  {
    if(j == 2)
      continue;
    cout << j - 2 << endl;
    j *= 2;
  }

  
  // Output Needed
  // 2
  // 6
  // 14
  // 30
  // 62
  // 126
  
  return 0;
}