#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    cin >> s;
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            cout << "YES";
            return 0;
        }  
    }
    cout << "NO";
    return 0;
}