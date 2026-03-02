#include <iostream>
using namespace std;

int main()
{
  // Example 1
  // int vals[] = {100, 200, 600, 200, 100};
  // 
  // Output
  // "Array Is Palindrome"
  // 
  // Example 2
  // int vals[] = {100, 200, 200, 100};
  // 
  // Output
  // "Array Is Palindrome"
  // 
  // Example 3
  int vals[] = {100, 300, 600, 200, 100};
  // 
  // Output
  // "Array Is Not Palindrome"
  

  if (vals[0] == vals[sizeof(vals) / sizeof(vals[0]) - 1])
  {
    if (vals[1] == vals[sizeof(vals) / sizeof(vals[0]) - 2])
    {
      cout << "This Array Is Palindrome";
    } else {
      cout << "This Array Is Not Palindrome";
    }
  }
  
  
  return 0;
}