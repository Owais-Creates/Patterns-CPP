#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter the number" << endl;
    cin >> num;

    // Outer Loop
    for (int i = 1; i <= num; i++)
    {
        // Inner Loop
        for (int j = 1; j <= num; j++)
        {

            cout << j << " ";
        }

        cout<<endl;
    }

    return 0;
}

/*

*if n = 5;
----------

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/