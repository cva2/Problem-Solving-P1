#include <iostream>
#include <array>

using namespace std;

void PlusAndMultiply(int nums[], int numsize)
{
    int total   = 0;
    int result1 = 0;
    int result2 = 1;
    int result[]= {}; 
    
    for(int i = 0; i < numsize; i++)
    {
        if(nums[i] % 2 == 0)
        {
            result1 += nums[i];
            result[0] = result1;
        }
        else if (nums[i] % 2 == 1)
        {
            result2 *= nums[i];
            result[1] = result2;  
        }
    }
    total = result[0] + result[1];
    cout << total;
}

int main()
{
    int numbers[] = {10, 20, 3, 30, 5, 7, 40};
    int numssize = size(numbers);

    PlusAndMultiply(numbers, numssize);


    // Even Numbers -> 10 + 20 + 30 + 40 = 100
    // Odd Numbers  -> 3 * 5 * 7 = 105
    // Total = 100 + 105 = 205

    return 0;
}