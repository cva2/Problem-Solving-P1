#include <iostream>
using namespace std;

int main()
{
  int nums[] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};
  int numsS  = sizeof(nums) / sizeof(nums[1]);

  for(int i = numsS - 1; i > -1; i--)
  {
    cout << nums[i] << endl;
  }

  cout << "========\n";
  
  for(int j = numsS - 1; j > -1; j--)
  {
    if(nums[j] % 2 != 0)
      cout << nums[j] << endl;
  }


  
    // Output Needed
  // 30
  // 27
  // 24
  // 21
  // 18
  // 15
  // 12
  // 9
  // 6
  // 3
  // 
    // Without Even Numbers
  // 27
  // 21
  // 15
  // 9
  // 3

  return 0;
}