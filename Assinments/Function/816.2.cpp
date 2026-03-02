#include <iostream>
using namespace std;

// Write Your Function Here

int books(int sma, int mid, int lar, int shelf)
{
  int SizeBooks = (sma * 2) + (mid * 4) + (lar * 6); // 54
  int SizeShelf = shelf * 20; // 80
  int rest = SizeShelf - SizeBooks;

  if(rest > 0)
    return rest;
  else
    return 0;


}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}