#include <iostream>
using namespace std;

int main()
{

    int num;
    char ch = 69;

    cout << "Enter a number" << endl;
    cin >> num;

    // Outer Loop (rows)
    for (int i = 0; i < num; i++)
    {
        ch = 69;
        // Inner Loop (cols)
        for (int j = num; j > 0; j--)
        {
            cout << (char)ch << " ";
            ch--;
        }

        cout << endl;
    }

    return 0;
}

/*

if n = 5;
---------

E D C B A
E D C B A
E D C B A
E D C B A
E D C B A

*/