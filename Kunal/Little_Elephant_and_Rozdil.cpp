#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[n + 1];
    bool still = 0;
    int mn = INT_MAX, index;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] == mn)
            still = 1;
        else if (arr[i] < mn)
        {
           mn=arr[i];
           index=i;
           still=0;      
        }
    }
    if(still) cout  << "Still Rozdil" << endl;
    else cout << index <<endl;
    return 0;
}