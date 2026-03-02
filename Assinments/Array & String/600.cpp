#include <iostream>
#include <array>
using namespace std;

int main()
{
    cout << "Hello Eng.Anas\n";
    int nums[] = {100, 200, 300, 400};
    cout << nums[2] << "\n";
    cout << sizeof(nums[1]) << "\n";
    
    int numss[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    cout << numss[2][1];

    array<int, 3> points = {1, 2, 3};
    
    return 0;
}