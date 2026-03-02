#include <iostream>
#include <array>

using namespace std;

int main()
{
    int result = 2;
    int Plus = 4;
    for (int i = 0; i < 6; i++)
    {
        cout << result << endl;
        result += Plus;        
        Plus *= 2;
    }

    // int i;
    // while (i < 7)
    // {
    //     cout << result << endl;
    //     result *= 2;
    //     i++; 
    // }

    return 0;
}