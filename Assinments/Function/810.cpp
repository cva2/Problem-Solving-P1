#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;

int bigmina(int numBer[], int numSize)
{
    int result;
    for(int i = 0; i < numSize; i++)
    {   
        if(numBer[i] < numBer[i + 1] && numBer[i] < 0)
        {
            result = numBer[i];
        }
    }
        return result;
}

int main()
{
    int numbers[] = { -10, -20, 15, 100, 10, 5, -50, -5, -10 };
    int numsize = size(numbers);

    cout << bigmina(numbers, numsize);

    return 0;
}