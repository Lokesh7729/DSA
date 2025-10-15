#include <iostream>
using namespace std;

int reverseDigits(int n)
{
    int revNum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10; // will extract the last digit
        revNum = revNum * 10 + lastdigit;
        n = n / 10;
    }
    return revNum;
}

int main()
{
    int n = 4562;
    cout << reverseDigits(n);
    return 0;
}