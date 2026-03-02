#include <iostream>
using namespace std;

int main()
{
  int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
  int numsS  = sizeof(nums) / sizeof(nums[1]);

  for(int i = 0; i < numsS; i++)
  {
    if((nums[i] + nums[i]) == nums[i + 1])
      cout << nums[i] << endl;
  }
  
  
  // Output Needed
  // 10
  // 14
  // 40
  // 15
  
  return 0;
}