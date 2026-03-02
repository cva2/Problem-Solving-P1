#include <iostream>
using namespace std;

// Write Your Function Here

int pricing(int allPh, int usePh, int newPri, int taxe)
{
    float taxes = float(taxe) / 100;
    int newPh   = allPh - usePh;
    int usePri  = newPri - 200;
    int useEarn = usePri * usePh;
    int newEarn = newPri * newPh;
    int allEarn = newEarn + useEarn;
    int txEarn  = allEarn * taxes;
    int netEarn = allEarn - txEarn;
    return netEarn;
}

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}