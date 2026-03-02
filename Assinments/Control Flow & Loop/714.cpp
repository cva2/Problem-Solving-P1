#include <iostream>
using namespace std;

int main()
{
  int num = 2;
  while (num < 520) 
  {
    if(num == 2)
    {
      num /= 2;
    }
    cout << num << endl;
    num *= 2;
    num += 2;
      
  }
  
  // Needed Output
  // 1
  // 4
  // 10
  // 22
  // 46
  // 94
  // 190
  // 382
  
  return 0;
}