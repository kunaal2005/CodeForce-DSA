#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    int length;
    cin >> s1;
    length = s1.length();
    int upper = 0, lower = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            upper++;
        else if (s1[i] >= 'a' && s1[i] <= 'z')
            lower++;
    }
    // change the string
    int c = length / 2;
    if (c < upper)
    {
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    }
    else
    {
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    }
    cout << s1;
    return 0;
}