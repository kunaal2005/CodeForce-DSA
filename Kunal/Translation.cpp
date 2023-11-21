#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[101],b[101];
    cin >> a;
    cin >> b;
    int n=strlen(a);
    for (int i = 0,j=n-1; i < n; i++,j--)
    {
        if(a[i]==b[j]);
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}