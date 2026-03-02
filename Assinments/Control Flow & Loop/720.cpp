#include <iostream>
using namespace std;

int main()
{
  string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
  int namesS = sizeof(names) / sizeof(names[0]);
  int size = 5;

  for(int i = 0; i < namesS; i++)
  {
    if(names[i].size() == size)
      cout << names[i] << endl;
  }

  
  // Output Needed
  // "Osama"
  // "Ahmed"
  // "Hagar"
  // "Salwa"
  
  return 0;
}