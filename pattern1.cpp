#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter a number" << endl;
    cin >> num;

    // Outer Loop (ROWS)
    for (int i = 1; i <= num; i++)
    {
        // Inner Loop (COLUMNS)
        for (int j = 1; j <= num; j++)
        {
            cout << "*"
                 << " ";
        }

        cout << endl;
    }

    return 0;
}

/*

*if n = 5;

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/