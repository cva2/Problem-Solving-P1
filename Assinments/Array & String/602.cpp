#include <iostream>
using namespace std;

int main()
{
    int check = 25;
    int nums[]{20, 25, 30, 70, 100};

    if(nums[0] > check)
    {
        cout << nums[0] + nums[3] << "\n";
    }
    if(nums[1] > check)
    {
        cout << nums[1] + nums[3] << "\n";
    }
    if(nums[2] > check)
    {
        cout << nums[2] + nums[3] << "\n";
    }
    
    
    return 0;
}