#include <iostream>
using namespace std;

// Write Your Function Here

string createurl(string htt, string noun, string dom, bool www = true)
{
  string res;
  res = htt + "://";
  
  if(www == true)
    res += "www.";
  
  res += noun + "." + dom;

  return res;
}

int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
}