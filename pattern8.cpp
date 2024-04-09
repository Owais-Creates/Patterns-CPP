#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: " << endl;

    cin >> num;

    // Outer loop (rows)
    for (int i = 1; i <= num; i++)
    {
        // Inner loop (cols)
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

if n=5;
--------

*
* *
* * *
* * * *
* * * * *

*/