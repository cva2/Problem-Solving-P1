#include <iostream>
#include <array>

using namespace std;

int main()
{
    int Inum, nums, Fnum, Lnum;
    cout << "Enter Your Numbers\n";
    cout << "Fist Number\n";
    cin  >> Fnum;
    cout << "Last Number\n";
    cin  >> Lnum;
    // int Anum[] = {Fnum, Lnum};
    // int Inum[] = {Fnum,

    cout << "=======================\n";

    // if (Fnum < Lnum)
    // {
    //     for (int i = Fnum + 1; i < Lnum; i++)
    //     {
    //         if (i % 2 == 1)
    //         {
    //             cout << i << "\n";
    //         }
    //     }
    // } 

    // if (Fnum > Lnum)
    // {
    //     int cr;
    //     cr   = Fnum;
    //     Fnum = Lnum;
    //     Lnum = cr;

    //     for (int j = Fnum + 1; j < Lnum; j++)
    //     {
    //         if (j % 2 == 1)
    //         {
    //             cout << j << "\n";
    //         }    
    //     }
    // }
    /* OR */

    if (Fnum > Lnum)
    {
        int cr;
        cr   = Fnum;
        Fnum = Lnum;
        Lnum = cr;
    }

        for (int j = Fnum + 1; j < Lnum; j++)
        {
            if (j % 2 == 1)
            {
                cout << j << "\n";
            }    
        }


  return 0;
}