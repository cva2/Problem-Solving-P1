#include <iostream>

using namespace std;

int beforNums(int num1, int  num2)
{
    int result = 0;
    for(int i = num2; i > -1; i--)
    {
        result +=  num1;
        num1 -= 1;
    }
    return result;
}

int main()
{
    cout << beforNums(15, 3);
    return 0;
}