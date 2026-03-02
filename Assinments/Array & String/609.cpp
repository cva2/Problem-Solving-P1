#include <iostream>
using namespace std;

int main()
{
  int nums[] = {10, 20, 30, 40, 20, 50};

  // Method 1
  // 6
  cout << sizeof(nums) / sizeof(nums[1]) << endl;
  
  // Method 2
  // 6
  cout << size(nums);
  
  // Method 3
  // 6

  cout << end(nums) - begin(nums);  // 6 - 0 
                         // index(5 + 1) - index(0)
   
  return 0;
}