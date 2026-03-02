#include <iostream>

using namespace std;

string web(string protocol, string name, string dom, bool option = true)
{
    string result = "";
    result += protocol + "://";
     if(option == true)
     {
        result += "www.";
     }
    result += name + "." + dom;
    return result;
     
     
}
int main()
{
    cout << web("http", "Elzero", "org", false);
    return 0;
}
