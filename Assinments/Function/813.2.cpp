#include <iostream>
using namespace std;

// Write Your Function Here

string greeting(string name, string type = "")
{
  string res = "";
  if(type == "Female")
    res += "Hello Miss " + name; 
  else if(type == "Male")
    res += "Hello Mr " + name; 
  else
    res += "Hello " + name;
    
  return res;
}

int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}