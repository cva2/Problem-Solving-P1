#include <iostream>
using namespace std;

int books(int sBook, int mBook, int lBook, int rBook)
{
  int sBooks = sBook * 2; 
  int mBooks = mBook * 4;
  int lBooks = lBook * 6; 
  int rBooks = rBook * 20;
  int Size = sBooks + mBooks + lBooks;
  if(rBooks > Size)
  {
    return rBooks - Size;
  }
    return 0;
}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}