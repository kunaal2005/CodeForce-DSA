#include <iostream>
using namespace std;
int main()
{
    int n, x = 0;
    cin >> n;
    while (n--)
    {
        string a;
        cin >> a;
        if (a[1] == '+') x++;
        else x--;     
    }
    cout << x;
    return 0;
}