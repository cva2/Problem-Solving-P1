#include <iostream>
#include <array>

using namespace std;

void counter(int numBers[], int numSizee, int noNeed)
{
    int result = 0;
    for(int i = 0; i > numSizee; i++)
    {
        if(numBers[i] == noNeed)
        {
            continue;
        }
        result += numBers[i];
    }
    cout << result;
}

int main()
{
    int numbers[] = {13, 20, 40, 20, 13, 20, 80};
    int numsize = size(numbers);
    int noneed = 13;

    counter(numbers, numsize, noneed);


    return 0;
}