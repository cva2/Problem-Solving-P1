#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Osama", "Ameer"};
  


  for(int i = 0; i < 3; i++)
  {
    cout << "=========\n";
    cout << "= " << friends[i] << " =\n";
    
    int nameS = 5;
    cout << "==================\n";
    cout << "== ";
    for(int j = 0; j < nameS; j++)
    {
      cout << friends[i][j];
      if(j < 5 - 1)
        cout << ", ";
    }
    cout << " =\n";
    cout << "==================\n\n";

  }
  

  // Output Needed
  // =========
  // = Ahmed =
  // ==================
  // == A, h, m, e, d =
  // ==================
  // 
  // =========
  // = Osama =
  // ==================
  // == O, s, a, m, a =
  // ==================
  // 
  // =========
  // = Ameer =
  // ==================
  // == A, m, e, e, r =
  // ==================
  
  return 0;
}