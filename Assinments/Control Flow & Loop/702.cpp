#include <iostream>
#include <array>

using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 1;
    for (;;)
    {
        cout << nums[i] << "\n";
        i++;
        if (i == 8)
        {
            break;
        }
    }
    return 0;
}