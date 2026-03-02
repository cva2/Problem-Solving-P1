#include <iostream>

using namespace std;

int calc(int a, int b)
{
    if(a == b) 
    {
        return a + b;
    }    
    else if(a > b) 
    {
        return a - b;
    }    
    else if(a < b) 
    {
        return b - a;
    }
    return 0;    
}

int main()
{
    cout << calc(40, 40) << "\n";
    cout << calc(200, 50) << "\n";
    cout << calc(100, 300) << "\n";

    return 0;
}