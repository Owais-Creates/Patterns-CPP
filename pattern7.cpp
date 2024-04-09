#include <iostream>
using namespace std;

int main()
{

    int num;
    char ch;

    cout << "Enter a number" << endl;
    cin >> num;

    // Outer Loop (rows)
    for (int i = 0; i < num; i++)
    {
        ch = 'E';
        // Inner Loop (cols)
        for (int j = num; j > 0; j--)
        {
            cout << ch << " ";
            ch--;
        }

        cout << endl;
    }

    return 0;
}

/*

if n = 5;
---------

E D B C A
E D B C A
E D B C A
E D B C A
E D B C A

*/