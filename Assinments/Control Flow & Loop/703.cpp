#include <iostream>
using namespace std;

int main()
{
  int num1, num2, sw;
  cout << "Enter Your Tow Numbers:- \n";
  cin  >> num1; // 13
  cin  >> num2; // 49

  if(num1 > num2)
  {
    sw = num1;
    num1 = num2;
    num2 = sw;
  }

  cout << "========\n";

  for(int i = num1 + 1; i < num2; i++)
  {
    if(i % 2 == 0)
      continue;
    cout << i << endl;
  }
  
  return 0;
}