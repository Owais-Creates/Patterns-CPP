#include <iostream>
using namespace std;

int main()
{

    int num, i, j;
    cout << "Enter the number of rows ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "e";
        return 0;
    }
    else
    {
        for (i = 1; i <= num; i++)
        {

            for (j = 1; j <= num; j++)
            {

                if ((i == j) || (i + j == num + 1))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << endl;
        }
    }

    return 0;
}