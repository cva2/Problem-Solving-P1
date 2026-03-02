#include <iostream>
using namespace std;

int main()
{
  for(int i = 0; i < 103; i++)
  {
    if(i < 10)
      cout << "00" << i << endl;
    if(i >= 10 && i < 100)
      cout << "0"  << i << endl;
    if(i >= 100)
      cout << i << endl;  
  }
  
  return 0;
}