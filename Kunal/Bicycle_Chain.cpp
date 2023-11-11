#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            if (k%a[i]==0)
            {
                b.push_back(k/a[i]);
            }  
        }  
    }
    int ma=*max_element(b.begin(),b.end());
    cout << count (b.begin(),b.end(),ma);  
    return 0;
}