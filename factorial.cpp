#include <iostream>
using namespace std;

int main()
{
    int num;
    long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Error! Factorial of a negative number does not exist.";
    }
    else
    {
        int i = 1;
        while (i <= num)
        {
            factorial = factorial * i;
            i++;
        }

        cout << "Factorial of " << num << " is " << factorial;
    }

    return 0;
}
