#include <iostream>
using namespace std;

int main()
{
    // int num;
    // char ch = 65;

    // cout << "Enter the number" << endl;
    // cin >> num;

    // // Outer Loop
    // for (int i = 1; i <= num; i++)
    // {
    //     // Inner Loop
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << (char)ch << " ";
    //     }
    //     cout << endl;
    //     ch++;
    // }

    /*
if n = 5;
---------

A
B B
C C C
D D D D
E E E E E
*/

    // ---------------------------------------------------------------------------------------------------

    // SECOND VARIATION.
    // int num2;
    // char ch2 = 65;

    // cout << "Enter the number" << endl;
    // cin >> num2;

    // // Outer Loop
    // for (int i = 1; i <= num2; i++)
    // {
    //     ch2 = 65;
    //     // Inner Loop
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << (char)ch2 << " ";
    //         ch2++;
    //     }
    //     cout << endl;
    // }

    //

    /*
    if n = 5;
    ---------

    A
    A B
    A B C
    A B C D
    A B C D E
    */

    //-------------------------------------------------------------------------------------------------------------------
    // THIRD VARIATION

    int num3, i, j, k;
    cout << "Enter the number" << endl;
    cin >> num3;

    for (i = 0; i < 5; i++)
    {

        // Space printing
        for (j = i + 1; j < 5; j++)
        {
            cout << "  " ;
        }

        // Star printing
        for (k = 0; k <= i; k++)
        {
            cout << "*" << " ";
        }
          cout << endl;
    }

    /*

    if n = 5;
    ----------

          *
        * *
      * * *
    * * * *
  * * * * *

    */

    return 0;
}
