#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, ans;
    int year;
    cin >> year;
    if (year >= 1000 && year <= 9000)
    {
        while (year)
        {
            year++;
            ans = year;
            a = year % 10;
            year /= 10;
            b = year % 10;
            year /= 10;
            c = year % 10;
            year /= 10;
            d = year % 10;
            if (a != b && a != c && a!=d && b!=c && b!=d && c!=d)
            {
                cout << ans;
                break;
            }
            year=ans;
        }
    }
    return 0;
}