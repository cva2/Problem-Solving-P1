#include <iostream>
#include <cctype>
using namespace std;

// Write Your Function Here

int PlusAndMultiply(int nums[], int count)
{
  int Enums = 0;
  int Onums = 1;
  int res;

  for(int i = 0; i < count; i++)
  {
    if(nums[i] % 2 == 0)
    {
      Enums += nums[i];
    } else if(nums[i] % 2 != 0)
    {
      Onums *= nums[i];
    } 
  }
  return Enums + Onums;
}

int main()
{
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize = size(numbers);
  cout << PlusAndMultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}