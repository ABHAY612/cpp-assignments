#include <iostream>
using namespace std;

int main()
{
    int n;
    long long a = 0, b = 1, next;

    cout << "How many numbers do you want? ";
    cin >> n;

    cout << "Series: ";

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << a << " ";
        }
        else if (i == 2)
        {
            cout << b << " ";
        }
        else
        {
            next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
    }

    return 0;
}
