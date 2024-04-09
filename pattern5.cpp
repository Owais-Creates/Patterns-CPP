#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number" << endl;

    cin >> num;

    // Outer loop (rows)
    for (int i = 0 ; i < num ; i++)
    {

        // Inner loop
        for (int j = num ; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

*if n = 5;
----------

5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 

*/