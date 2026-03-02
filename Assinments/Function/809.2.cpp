#include <iostream>
using namespace std;

// Write Your Function Here

int sumall(int nums[], int count, int cut)
{
  int res = 0;

  for(int i = 0; i < count; i++)
  {
    if(nums[i] != cut)
      res += nums[i];
  }
  return res;
}

int main()
{
  int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = size(numbers);
  int noneed = 13;
  cout << sumall(numbers, numssize, noneed) << "\n";
  return 0;
}