#include <iostream>
using namespace std;

int main()
{

    int num;
    char ch = 65; 
    cout << "Enter the number" << endl;

    cin >> num;

    // Outer loop (rows)
    for (int i = 0; i < num; i++)
    {
        // Inner loop (cols)
        for (int j = 0; j < num; j++)
        {
            cout << (char)ch << " ";
        }
        cout << endl;
        ch++;
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