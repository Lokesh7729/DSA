#include <iostream>
using namespace std;
// reverse number
int reverseDigits(int n)
{
    int revNum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        revNum = (revNum * 10) + lastdigit;
        n = n / 10;
    }
    return revNum;
}

int main()
{
    int n = 1221;
    int dup=n;
    int revNum= reverseDigits(n);
    if(dup==revNum) cout<<"true";
    else cout<<"false";
    return 0;
}