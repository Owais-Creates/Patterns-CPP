#include <iostream>
using namespace std;

int main()
{

  int num, i, j;
  char ch = 65; // ASCII value of A is 65.

  cout << "Enter the number: ";
  cin >> num;

  for (i = 0; i < num; i++)
  {
    // Space printing
    for (j = 0; j < i; j++)
    {
      cout << "  ";
    }

    // Inner Loop
    for (j = i; j < num; j++)
    {
      cout << (char)ch << " ";
    }
    cout << endl;
    ch++;
  }

  /*

A A A A A
B B B B
  C C C
    D D
      E

*/

  //----------------------------------------------------------------------------------------------------------------------

  int num2;
  cout << "Enter the number: ";
  cin >> num2;

  // Outer Loop
  for (i = 0; i < num2; i++)
  {
    // Star printing
    for (j = num2; j > i; j--)
    {
      cout << "* ";
    }
    cout << endl;
  }

  /*

* * * * *
* * * *
* * *
* *
*

*/

  //-----------------------------------------------------------------------------------------------------------------------

  int num3;
  cout << "Enter the number: ";
  cin >> num3;
  int z = 1;

  // Outer Loop
  for (i = 0; i < num3; i++)
  {

    // Space printing
    for (j = num3 - 1; j > i; j--)
    {
      cout << "  ";
    }

    // Star printing
    for (int k = 0; k < (2 * i + 1); k++)
    {
      cout << "* ";
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

  //--------------------------------------------------------------------------------------------------------------------

  int num4;
  cout << "Enter the number: ";
  cin >> num4;
  int z = num4 + 4;

  // OUTER LOOP
  for (i = 0; i < num4; i++)
  {
    // SPACE PRINTING
    for (j = 0; j < i; j++)
    { // Corrected the condition here
      cout << "  ";
    }

    // Star printing
    for (int k = z; k > 0; k--)
    {
      cout << "* ";
    }
    z -= 2;
    cout << endl;
  }

  /*

if n = 5;
---------

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
       * *
        *

*/

  //------------------------------------------------------------------------------------------------------------------------

  int num5;
  cin >> num5;

  int nsp = 0;
  int nst = num5;

  for (int i = 1; i <= num5; i++)
  {

    // space
    for (int j = 1; j <= nsp; j++)
    {
      cout << "  ";
    }

    // star
    for (int k = 1; k <= nst; k++)
    {
      cout << "* ";
    }

    // NL
    cout << endl;

    // updation
    if (i > num5 / 2)
    {
      nsp -= 1;
      nst += 2;
    }
    else
    {
      nsp += 1;
      nst -= 2;
    }
  }

  /*

if n = 5;
--------- 

  * * * * *
    * * *
      *
    * * *
  * * * * *

  */

  return 0;
  
}
