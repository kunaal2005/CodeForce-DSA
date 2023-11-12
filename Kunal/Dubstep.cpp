#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    bool isTrue=1;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i+=2;
            if(!isTrue)
            {
                cout << " ";    
            }continue;
        }
        else{
            isTrue=0;
            cout << s[i];
        }
    }
    return 0;
}