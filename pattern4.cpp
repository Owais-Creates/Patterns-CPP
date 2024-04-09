#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number" << endl;

    cin >> num;

    // Outer loop (rows)
    for (int i = num; i > 0; i--)
    {

        // Inner loop
        for (int j = 0; j < num; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

*if n = 5;
----------

5 5 5 5 5
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1


*/