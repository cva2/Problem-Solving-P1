#include <iostream>
#include <array>

using namespace std;

int calc(int num1, int num2, string op = "a")
{
    if(op == "a" || op == "add")
    {
        return num1 + num2;
    }
    if(op == "s" || op == "subtract")
    {
        return num1 - num2;
    }
    if(op == "m" || op == "multiply")
    {
        return num1 * num2;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout << calc(10, 20) << "\n";
    cout << calc(10, 20, "a") << "\n";
    cout << calc(10, 20, "s") << "\n";
    cout << calc(10, 20, "subtract") << "\n";
    cout << calc(10, 20, "multiply") << "\n";
    cout << calc(10, 20, "m") << "\n";
    cout << calc(10, 20, "") << "\n";
    cout << calc(10, 20, "hello") << "\n";

    return 0;
}