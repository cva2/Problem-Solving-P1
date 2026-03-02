#include <iostream>

using namespace std;

float avg(int Money[], int moneySize)
{
    float result = 0;
    for(int i = 0; i < moneySize; i++)
    {
        result += Money[i];
        cout << result;
        cout << "\n==================\n";
    }
    return result / moneySize;
}

int main()
{
    int money[] = {10, 20, 15, 25, 30, 35};
    int moneysize = size(money);

    cout << avg(money, moneysize);


    return 0;
}