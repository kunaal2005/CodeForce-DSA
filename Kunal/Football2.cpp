#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[201];
    cin >> s;
    int c1=0,c0=0;
    for (int i = 0; i < strlen(s); i++)
    {
        char a=s[i];
        if(a=='1')
        {
            c1++;
            c0=0;
        }
        else
        {
            c0++;
            c1=0;
        }
        if(c1 >= 7 || c0 >= 7)
        {
            cout << "YES" <<endl;
            return 0;
        }
    }
    cout << "NO" <<endl;
    return 0;
}