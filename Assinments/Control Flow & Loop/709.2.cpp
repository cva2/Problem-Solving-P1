#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
  
  for(int i = 1; i < 3; i++)
  {
    cout << friends[i] << endl;
  }

  int j = 1;
  while(j < 3)
  {
    cout << friends[j] << endl;
    j++;
  }
  // Output Needed
  // "Mohamed"
  // "Sayed"
  
  return 0;
}