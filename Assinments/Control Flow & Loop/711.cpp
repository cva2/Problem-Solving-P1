#include <iostream>
#include <array>

using namespace std;

int main()
{
    string fri[] = {"Ahmad", "Osama", "Ameer"};
    
    for (int i = 0; i < 3; i++)
    {
        cout << "=============\n";
        cout << "====" << fri[i] << "====" << "\n";
        cout << "=============\n==";
        for (int j = 0; j < 5; j++)
        {
            cout << fri[i][j];
            if (j == 4)
            {
                continue;
            }
            cout << ",";
        }
        cout << "==\n=============\n\n";
    }

    return 0;
}