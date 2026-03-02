#include <iostream>
#include <array>

using namespace std;

int main()
{
    int v[] = {100, 200, 200, 100};

    if (v[0] == v[3] && v[1] == v[2])
    {
        cout << "Array Is Palindrome";
    } else 
    {
        cout << "Array Is Not Palindrome";
    }



    return 0;
}