#include <iostream>
#include <array>

using namespace std;

int main()
{
    string friends [] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    

    for (int i = 0; i < 5; i++)
    {
        if (friends [i][0] == 'A')
        {
            cout << friends[i] << endl;
        }
    }

    return 0;
}