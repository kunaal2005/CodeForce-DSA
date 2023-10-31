#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    int f=0,a=0;
    cin >> s;
    for (int i = 0; s[i]!='\0'; i++)
    {
        for (int j = i-1; j >=0; j--)
        {
            if(s[i]==s[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            a++;
        }
        f=0;  
    }
    if(a%2==0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else cout << "IGNORE HIM!" <<endl;
    return 0;
}