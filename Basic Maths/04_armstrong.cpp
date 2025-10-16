#include <iostream>
using namespace std;

int main()
{
    int n, temp, sum = 0, rem;

    cout << "Enter a number: ";
    cin >> n;

    temp = n; // store original number

    while (n > 0)
    {
        rem = n % 10;              // get last digit
        sum = sum + (rem * rem * rem); // cube of digit and add
        n = n / 10;                // remove last digit
    }

    if (sum == temp)
        cout << temp << " is an Armstrong number.";
    else
        cout << temp << " is not an Armstrong number.";

    return 0;
}
