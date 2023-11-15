#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[101];
    cin >> s;
    string ans="";
    for (int i = 0; i < strlen(s); i++)
    {
        s[i]=tolower(s[i]);
    }
    
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
        {
            ans+=s[i];
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ".";
        cout << ans[i];
    }
    return 0;
}