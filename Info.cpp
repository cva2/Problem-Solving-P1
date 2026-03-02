/*



\0 => Stop
\n => New Line
\r => (Past Curser Return To First) (Now It As \n)
\b => BackSpace
\t => Tab
\\ => Print \
\" => Print "
\' => Print '

A
JAVA



////=======================================================================================================================================================================



x = 5
y = x++ // x = 5 Then Plus 1
y = x++ // x = 6

string name1 = "ss";
string &name2 = name1;
/ "&" Used To Make "name2" Use The Same Location In Memory
? Lab6




////=======================================================================================================================================================================

int = 2 // 4
float = 1. (7 Numbers) // 4
double = 1. (15 Numbers) // 8
char = 'r' // 1
string = "ade" // To 32
bool = true // 1






////=======================================================================================================================================================================



sizeof(int) => 4 Byts 
int(h) | (int)h => Change char To ASCII
float(3 / 2) | (float)3 / 2 => Change Integer To float
stoi("150") ||to_string("150") => Change String To Integer

char('@') = 64 // To ASCII



#define maxi MAX_INT | typedef MAX_INT maxi; | using maxi = MAX_INT 



////=======================================================================================================================================================================


!  | Pointer |c =>

int x = 10;
int *y = &x;
cout << x   // 10
cout << &x  // Address x
cout << y   // Address x 
cout << *y  // 10


////=======================================================================================================================================================================



!  | Condition | =>


if(Condition)                   
{                         

} else {                 

}
       OR
(Condition ? True : False)


*?--------| EXAMPLE |
int i;
cin >> i;
if (i == 1)
{
  cout << i << " == 1";
} else {
  cout << i << " != 1";
}
       OR
(i == 0 ? cout << i << " == 1" : cout << i << " != 1")

//                         //

switch (Variable)
{
  case 1:
  break;
  case 2:
  break;
  case 
  default:
}

*?--------| EXAMPLE |

switch (i)
{
  case 1:
    cout << "Version 1";
  case 2:
    cout << "Version 2";
  default:
    cout << "Non-Version";
}
  


////============================================================================================================================================================================////



!  | Loop | =>

for (Init; End Condition; Update)
{
  Block Of Code
}

*?---------| EXAMPLE |

for (int i = 0; i < 11; i++)
{
  cout << i << endl;
}
        
//                         //

Init
while (do Condition)
{
  Block Of Code
  Update
}

*?--------| EXAMPLE |
      
int j = 0;
while (j < 11)
{
  cout << j << endl;
  j++;
}


//                         //

do
{                       // In Any Way Will Do Block First
  Block Of Code 
  Update
}
while (Condition)

*?--------| EXAMPLE |

int k;
do
{
  cout << k << endl;
  k++;
} while (k < 11);



////=====================================================================================================================================================================////

#include <iomanip>

setprecistion(3) // How Much Number After Point 




////=====================================================================================================================================================================////



!   | Array | =>
#include <array>

int Numbers[3] = {2, 4, 5}; | array<int, 3> Numbers = {2, 4, 5}; => Array
Number.at(1)    => 4
Number.front()  => 2
Number.back()   => 5
Number.fill(10) => {10, 10, 10}
size(Number)    => 3
Number.empty()  => 0 (bool)


//                         //

!  | Shifting | =>
          Example:    I Need To Shift Element to Next In Index To Add Num In Array In Meddle 
                          add 100[2] After 20[1] -- As Shift All Indexes Befor [1]

int size = 5, element, index;
int nums[] {10, 20, 30, 40, 50};
cin >> element >> index;
for(int i = size; i > place; i--)    // From High
  nums[i] = nums[i - 1];              // nums[5] (empty) = nums[4] (50)  => {10, 20, 30, 40, , 50}

nums[index] = element;


//                         //

!   | Deleting | =>
          Example:    I Need To Delete Element So I Will Shift Rest Element To Back
                          Select Item => Delete => Shift
                          Delete 30[2]

int size = 5, element, index;
int nums[] {10, 20, 30, 40, 50};
cin >> element;
for(int i = 0; i < size; i++) // Find Item
  if(nums[i] == element)
    index = i;

for(int i = index; i < size; i++)
  nums[i] = nums[i + 1];





////=========================================================================================================================================================================////







////=========================================================================================================================================================================////


!  | String | =>
#include <cstring> | <string.c>

char fname[] = "An";
char lname[] = "as";
     =>   Concatenate  
cout << fname << lname;
cout << fname + lname;
cout << stract(fname, lname);
cout << fname.append(lname); => Put After



////===============================================================================================================================================================================////



!  | Function | =>

ReturnDataType FunctionName(Parameter1, parameter2, ......)
{
  Your Code...
  
  return Type;
}
  
*?--------| EXAMPLE |
  
Functions
  
? 1
void test1(int age, string name, string ID = "UnKnown")
{
  cout << age << " " << name << " " << ID << endl;
  
  return 3;
}
    
? 2
int test2(int num1, int num2)
{
  cout << "Operation Is Done";
  
  return num1 + num2; //* As "Break;"
}

void test3(num6); //* Forward Declaration

Main

int main()    //* MUST RETURN INTEGER
{
  ? 1
  test1(18, "Osama");    //* You Can Skip The Last Parameter - MUST BE LAST PARAMETER !! 
  
  ? 2
  int result = test2(5, 10);
  //*   OR
  cout << test2(5, 10);
  
  ? 3
  test3(10)
  
  return 0;
}
  
Forward Function

? 3
void test3(num6)
{
  cout << num6;
}
          
//                         //

*TODO:     Math Function:-
#include <cmath>

pow(3, 2)     //* 3 Power 2    = 9
fmod(11.5, 2) //* 11.5 % 2     = 1.5   - CAN NOT USE 11.5 % 2!
ceil(9.4)     //* Near To Up   = 10
floor(9.4)    //* Near To Down = 9
round(9.4)    //* Near As Math = 9
trunc(9.4)    //* Cut ".4"     = 9
          
//                         //


*TODO:     Built-In Function:-

#include <cctype>
tolower('A')   //* Make Small   Letter = a 
toupper('a')   //* Make Capital Letter = A
islower('a')   //* Is Small     Letter = True
isupper('A')   //* Is Capital   Letter = True
isspace(X)     //* Is Space     Letter = True   - Also \n \b \t ....

#include <algorithm>
int nums[] = {10, 20, 40, 10, 30, 10, 10}
min(10, 20)    //* Minimum  Number   = 10
max(10, 20)    //* Maximum  Number   = 20
count(10)      //* count of Number   = 4u



////===============================================================================================================================================================================////



!   | To Prevent Integer In String | =>

while (isdigit(items[numItems].name[0])) // Check If He Start With Integet
{
  cout << "Error: Can't Start With Number\n=> ";
  getline(cin, items[numItems].name);
}
  
//                         //


!  | To Prevent Character | =>

while (!(cin >> items[numItems].price))
{
  cout << "Error: Price must be a number only\n => ";
  cin.clear();
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
  
  








////===============================================================================================================================================================================////
////===============================================================================================================================================================================////
////===============================================================================================================================================================================////
////===============================================================================================================================================================================////


!         | DATA STRUCTURE | =>



? Structure

struct Book
{
  string name;
  int price;
};

Book b1 // In The Same b1
{
  {nam1, pri1}, // b1[0]
  {nam2, pri2}  // b1[1]  
}; // b1[1].price => pri2

* Or

In Main()

book b2 = {nam1, pri1}; // b2.name => nam1



? Union

Like Structure But He Take The Largest Value For All Variables


////===============================================================================================================================================================================////


!!      | CLASS | =>

*  As Struct But:
class book
{
  private:
    int pass; // Just Declare Value In Class Function
  public:
    string name;
    int price;

  *   But
  void print()
  {
    cout << name;
  }
  *  Or
  int prices();
};

int book::prices()
{
  return price;
}

In main()
{
  b1.print();
  b1.price();
}


//                         //


TODO:  How To Do Functions By Classes
=>
int sum(int a, int b)
{
  return a + b;
}
int main()
{
  int x = 3, y = 9;
  cout << sum(x, y); // 3, 9
}

TODO:  By Class

class Book
{
  public:
    string name;
    int price;
    

  ?  DiStructor => 1.1
  ~Book()   // No Paramater => Only One Dis! | Delete Variables
  {
    cout << "Deleted";
  }

  ?  ConStructor => 1.2
  Book();
  
  Book(string nam, int pri)   // Constructor As Function Run When Call Class At General!!
  {
    name = nam;
    price = pri;
    cout << "Saved";
  }
  
  ?  Function => 1.3
  void dec();

  void save(string nam, int pri)
  {
    name = nam;
    price = pri;
  }
  
  void print(book n)
  {
    cout << n.name; // From Parameter
    cout << name;   // Cout Public
  }


  ?  Friend Function
  void book(string nam); // Adding A Normal Function For Class

};

//                //

?  Friend Function
void book(string nam)
{
  cout << " Hello ";
}

?  ConStructor
Book :: Book()      // Class :: Con
{
  cout << "Hi";
}

?  Function
void Book :: dec()  // Class :: Fun
{
  cout << "Hi";
}

//              //

int main()
{
  Book b1;
  Book b2;
  b1.name = "Anas";
  b2.name = "Ahmed";

  b1.print(b1); // Anas 
  b2.print();   // Ahmed Or   
  cout : 

  ?  1.1
  b1.~Book(); // Deleted
  
  ?  1.2    
  Book ob1; // Calling Class // Hi
  Book ob2("Anas", 5) // Save Values // Saved
  
  ?  1.3
  b1.save("Seif", 150)
  b1.print() // Seif
}


//                         //

!        | INHERITANCE | =>

? Move Variables To Inheritor...

class person 
{
  private:
    int age;
    string name;
  public:
    void setp(int a, string n)
    {
      age = a;
      name = n;
    }
    void print()
    {
      cout << age << " " << name;
    }
};

TODO:   Single Inheritance
class student : person // Because Student Has ( name, age, id, grade )
{
  private:
    int id;
    int grade;
  public:
    void sets(int i, int g)
    {
      id = i;
      grade = g;
    }
    void display()
    {
      cout << id << " " << grade;
    }
};

int main()
{
  student c1;
  c1.setp(15, "Ahmed");
  c1.sets(25207, 3);
}

TODO:   Parametrized Constructor

class first
{
  private:
    int num1;
  public:
    first(int a)
    {
      num1 = a;
      cout << num1 << " First Constructor \n";
    }
};

class second : public first // 
{
  private:
    int num2;
  public:

  ? Send A Variable To Dad Constructor
  second(int b, int a) : first(a)  
  {
    num2 = b;
    cout << num2 << " Second Constructor \n";
  }
};

int main()
{
  second n1(4);
}

TODO:     public:  |  private:  |  protected:  => In Class

? public:
Can Use Values In Main

? private:
Only Use In Same Class

? protect:
Private Expect Someone

TODO:   : public  |  : private  |  : protected  => In Inheritance

? : public
Inherit Copy Past (Usable)
public  -> public
private -> private
? : private
Inherit All Private Variables
public  -> private
private -> private

? : protected














////===============================================================================================================================================================================////
























































  
  */