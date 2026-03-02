#include <iostream>

using namespace std;

float calc(float salary, int days)
{
    int rDays, weeks;
    weeks = days / 7;
    rDays = days - 2 * weeks;
    // dailyExpenses = salary / rDays;
    // cout << "Dailly Expenses is: " << dailyExpenses;
    return salary / rDays;
}

int main()
{
    cout << "Dailly Expenses is: " << calc(2015, 21);
    cout << "\n";
    cout << "Dailly Expenses is: " << calc(4500, 40);

    return 0;
}       