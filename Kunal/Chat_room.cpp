#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j=0,f=0;
    char s[100],a[]="hello";
    cin  >> s;
    for (int i = 0; i < 5; i++)
    {
        while (s[j]!='\0')
        {
            if(a[i]==s[j])
            {
                f++;
                j++;
                break;
            }else j++;
        }
    }
    if(f==5) cout << "YES";
    else cout << "NO";
    return 0;
}