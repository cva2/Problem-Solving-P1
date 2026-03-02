#include <iostream>
using namespace std;

// Write Your Function Here

float pricing(int sNewPhs, int OldPhs, int PNewPh, float tax)
{
  int NewPhs  = sNewPhs - OldPhs; // 
  int POldPh  = PNewPh - 200;     // 600
  int POldPhs = OldPhs * POldPh;  // 10 * 600
  int PNewPhs = NewPhs * PNewPh;  // 40  * 800
  int AllEarn = PNewPhs + POldPhs;
  
  return AllEarn - ((tax / 100) * AllEarn);
}

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}