#include <iostream>

using namespace std;

string swapping(string chara)
{
    int numSize = size(chara);
    string result = "";

    for(int i = 0; i < numSize; i++)
    {
        if(isupper(chara[i]) && chara[i] != 'h')
        {
            result += tolower(chara[i]);
        }
        else if(islower(chara[i]) && chara[i] != 'h')
        {
            result += toupper(chara[i]);
        }
        else
        {
            result += chara[i];
        }

    }
    return result;
}

int main()
{
    cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
    
    return 0;
}