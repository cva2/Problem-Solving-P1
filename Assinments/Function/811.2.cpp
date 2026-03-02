#include <iostream>
using namespace std;

// Write Your Function Here

int firnegative(int nums[], int count)
{
  int res = -100;
  
  for(int i = 0; i < count; i++)
  {
    if(res < nums[i] && nums[i] < 0)
      res = nums[i];
    
    
  } 
  return res;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
  int numssize = size(numbers);
  cout << firnegative(numbers, numssize) << "\n";
  return 0;
}