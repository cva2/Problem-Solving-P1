#include <iostream>
using namespace std;

string greeting(string name, string type = "")
{
    string result = "";
    result += "Hello "; 

    if(type == "Male")
    {
        result +="Mr ";
    } else if(type == "Female")
    {
        result += "Miss ";
    }
    result += name;
    return result;
}


int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}