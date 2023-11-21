#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    //drink quentity
    int ans=k*l/(n*nl);
    // lemon
    if(ans>c*d/n)
    {
        ans=c*d/n;
    }
    //salt
    if (ans>(p/np)/n)
    {
        ans=(p/np)/n;
    }
    cout << ans;
    return 0;
}