#include <iostream>
using namespace std;

int main()
{
  int num = 4;
  int nums[] = {2, 4, 5, 6, 10};

  for(int i = 0; i < 5; i++)
  {
    cout << nums[i] << " + " << nums[num] << " = " << nums[i] + nums[num] << endl;  
    num--;
  }
  
  // Output Needed
  // "2 + 10 = 12"
  // "4 + 6 = 10"
  // "5 + 5 = 10"
  // "6 + 4 = 10"
  // "10 + 2 = 12"
  
  return 0;
}