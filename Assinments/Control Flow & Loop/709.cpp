#include <iostream>
#include <array>

using namespace std;

int main()
{
    string friends [] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

    for (int i = 0; i < 4; i++)
    {
        if (i == 0 || i == 3)
        {
            continue;
        }
        cout << friends [i] << endl;
    }

    return 0;
}