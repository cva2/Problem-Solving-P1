#include <iostream>
#include <cctype>
using namespace std;

// Write Your Function Here

string swapping(string text)
{
  int sizet = size(text);
  string res = "";
  
  for(int i = 0; i < sizet; i ++)
  {
    if(isupper(text[i]) && text[i] != 'H')
    {
      res += tolower(text[i]);
    }
    else if(islower(text[i]) && text[i] != 'h')
    {
      res += toupper(text[i]);
    }
    else
    {
      res += text[i];
    }

    
  }
  
  return res; 
}

int main()
{
  cout << swapping("DraGoN Of THe PROgramming") << "\n"; // dRAgOn oF tHE proGRAMMING
  return 0;
}