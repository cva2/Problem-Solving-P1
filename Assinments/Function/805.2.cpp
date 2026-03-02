#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here

void thepower(int num1, int num2)
{
  cout << pow(num1, num2) << endl;
  
  int result = 1;
  for(int i = 0; i < num2; i++)
  {
    result =+ result * num1;
  }
  cout << result;
  
}

int main()
{
  thepower(2, 5); // 32
  return 0;
}