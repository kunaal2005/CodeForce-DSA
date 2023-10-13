#include <iostream>
using namespace std;
int main()
{
    long long n;
    int r = 0;
    cin >> n;
    while (n)
    {
        int a = 0;
        a = n % 10;
        n /= 10;
        if(a==4 || a== 7)
        {
            r++;
        }
    }
    if (r == 4 || r == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}