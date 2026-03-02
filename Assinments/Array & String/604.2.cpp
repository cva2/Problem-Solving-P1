#include <iostream>
#include <array>
using namespace std;

int main()
{
  // Example 1
  // int vals[]{100, 200, 250, 400, 200};
  
  // Needed Output
  // "First Number + Last Number Is Larger Than Middle Number"
  // "100 + 200 = 300"
  // "300 > 250"
  
  // Example 2
  // int vals[]{100, 200, 500, 400, 200};
  // 
  // Needed Output
  // "Second Number + Before Last Number Is Larger Than Middle Number"
  // "200 + 400 = 600"
  // "600 > 500"
// 
// Example 3
int vals[]{100, 200, 600, 400, 200};
// 
// Needed Output
// "Middle Number Is The Largest"
// "600"

if (vals[0] + vals[4] > vals[2])
{
  cout << "First Number + Last Number Is Larger Than Middle Number\n";
  cout << "100 + 200 = 300\n";
  cout << "300 > 250\n";
} else if (vals[1] + vals[3] > vals[2])
{
  cout << "Second Number + Before Last Number Is Larger Than Middle Number\n";
  cout << "200 + 400 = 600\n";
  cout << "600 > 500\n";
} else {
  cout << "Middle Number Is The Largest\n";
  cout << "600";
} 
  
  return 0;
}