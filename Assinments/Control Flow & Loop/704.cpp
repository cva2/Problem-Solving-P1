#include <iostream>
#include <array>

using namespace std;

int main()
{
    
    int j;
    while (j < 19)
    {
        if (j == 10 || j == 12)
        {
            continue;
        }


        cout << j << "\n";
        j +=2;
        
    }
    // for (int i = 0; i < 19; i++)
    // {
    //     if (i % 2 == 1)
    //     {
    //         continue;
    //     }
    //     if (i == 10 || i == 12)
    //     {
    //         continue;
    //     }
    //     cout << i << "\n"; 
    // }


    return 0;
}