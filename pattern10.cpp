#include <iostream>
using namespace std;

int main()
{

  // int num, i, j;
  // char ch = 65; // ASCII value of A is 65.

  // cout
  //     << "enter the number";
  // cin >> num;

  // for (i = 0; i < num; i++)
  // {
  //     // Space printing
  //     for (int j = 1; j <= i; j++)
  //     {
  //         cout << "  ";
  //     }

  //     // Inner Loop
  //     for (j = i + 1; j <= num; j++)
  //     {
  //         cout << (char)ch<<" ";
  //     }
  //     cout << endl;
  //     ch++;
  // }

  /*

A A A A A
  B B B B
    C C C
      D D
        E

*/

  // ----------------------------------------------------------------------------------------------------------------------

  // int num2;
  // cout << "Enter the number" << endl;
  // cin >> num2;

  // // Outer Loop
  // for (int i = 1; i <= num2; i++)
  // {
  //     // Star printing
  //     for (int j = num2; j >= i ; j--)
  //     {
  //         cout << "*" << " ";
  //     }
  //     cout << endl;
  // }

  /*

  * * * * *
  * * * *
  * * *
  * *
  *

  */

  //-----------------------------------------------------------------------------------------------------------------------

  int num3;
  cout << "Enter the number" << endl;
  cin >> num3;

  // Outer Loop
  for (int i = 0; i < num3; i++)
  {

    // Space printing
    for (int j = num3 - 1; j > i; j--)
    {
      cout << " " << " ";
    }

    // Star printing
    for (int k = 0; k < (2 * i + 1); k++)
    {
      cout << "*" << " ";
    }

    cout << endl;
  }

  /*

  if n = 5;
  ---------

         *
       * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *


  */

  return 0;
}
