#include <iostream>
#include <array>

using namespace std;

void calc(int nums[], int count)
{
    int result = 0;
    for(int i = 0; i < count; i++)
    {
        if(i == 0)
        {
        cout << result << " + " << nums[i] << " = ";
        result += nums[i];
        cout << result;
        }
        else 
        {
        cout << " + " << nums[i] << " = ";
        result += nums[i];
        cout << result ;
        }
    }
}
// some edits

int main()
{
    int Numbers[] = {10, 15, 30, 65, 100, 40};
    int sizeNumbers = size(Numbers);

    calc(Numbers, sizeNumbers); 

    return 0;
}