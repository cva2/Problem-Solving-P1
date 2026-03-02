#include <iostream>
using namespace std;

int main()
{
  for(int i = 0; i < 11; i++)
  {
    cout << i << endl;
  }
  
  cout << "=======\n";
  
  int j = 0;
  while(j < 10)
  {
    j++;
    cout << j << endl;
  }
  
  cout << "=======\n";

  int k;
  do
  {
    k++;
    cout << k << endl;
  } while (k < 10);
  
  
  
  return 0;
}