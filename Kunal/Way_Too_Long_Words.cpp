#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char s[100];
        cin >> s;
        int len = strlen(s);
        if(len>10)
        {
            cout << s[0] << len-2 << s[len-1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}