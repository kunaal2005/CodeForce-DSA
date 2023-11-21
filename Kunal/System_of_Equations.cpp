#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int count=0;
    cin >> n >> m;
    for (int a = 0; a <= sqrt(n); a++)
    {
        int b=n-a*a;
        if((a+(b*b)==m))
        {
            count++;
        }
    }
    cout << count;
    return 0;
}