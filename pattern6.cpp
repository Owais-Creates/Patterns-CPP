#include <iostream>
using namespace std;

int main()
{

    int num;
    char ch = 'A'; // ASCII value of 'a' is 97. So, it will be assigned to the variable 'ch'.
    cout << "Enter the number" << endl;

    cin >> num;

    // Outer loop (rows)
    for (int i = 0; i < num; i++)
    {
        ch = 'A';
        // Inner loop (cols)
        for (int j = 0; j < num; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}

/*

if n = 5;
---------
 A A A A A
 B B B B B
 C C C C C
 D D D D D
 E E E E E

*/