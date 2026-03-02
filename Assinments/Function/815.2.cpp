#include <iostream>
using namespace std;

// Write Your Functions Here

float avg(int nums[], int snums)
{
  float av;
  for(int i = 0; i < snums; i++)
  {
    av += nums[i];
  }
  return av / snums;
}

int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}