#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter a number" << endl;
    cin >> num;

    // Outer Loop
    for (int i = 1; i <= num; i++)
    {
        // Inner Loop
        for (int j = 1; j <= num; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

if n = 5;
---------

1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

*/