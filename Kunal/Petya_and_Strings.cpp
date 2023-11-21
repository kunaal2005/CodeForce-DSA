#include <bits/stdc++.h>
using namespace std;
void capital(char s[100])
{
    for (int i = 0; s[i] !='\0'; i++)
    {
        if (s[i]>=97)
        {
            s[i]=s[i]-32;
        } 
    }
}
int main()
{
    char s1[100], s2[100];
    cin >> s1 >> s2;
    capital(s1);
    capital(s2);
    int i=strcmp(s1,s2);
    cout << i;
    return 0;
}