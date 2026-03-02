#include <iostream>
#include <array>

using namespace std;

int main()
{
    int v[] =  {10, 20, 30};

    v[0]=100, v[1]=200, v[2]=300;
    cout << v[0] << "\n";
    cout << v[1] << "\n";
    cout << v[2] << "\n";

    return 0; 
}