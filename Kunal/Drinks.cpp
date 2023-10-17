#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    double ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        sum+=t;
    }
    ans=(float)sum/(float)n;
    cout << setprecision(12) << ans;
    return 0;
}