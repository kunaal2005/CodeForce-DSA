
#include<bits/stdc++.h>
using namespace std;
// void solve()
// {
//     long long int n; cin >> n;
//     vector<long long int> arr(n);
//     for(long long int i=0;i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr.begin(),arr.end());
//     long long int count =0, count2=0;
//     for(long long int i=0; i <n; i++)
//     {
//         if(arr[i]==arr[0]) count++;
//         if(arr[i]==arr[n-1]) count2++;
//     }
//     if(arr[0]-arr[n-1]==0)
//     {
//         cout << arr[n-1] - arr[0] << " " << n*(n-1)/2 << endl;
//     }else cout << arr[n-1] - arr[0] << " " << count*count2 <<endl;
// }
int main(){
    // solve();
    //input
    long long int num;
    cin >> num;
    int arr[num];
    int arr_min= INT_MAX;
    int arr_max= INT_MIN;
    for (long long int i = 0; i < num; i++)
    {
        cin >> arr[i];
        if(arr[i]>arr_max) arr_max=arr[i];
        if(arr[i]<arr_min) arr_min=arr[i];
    }
    // first output
    long long int diff= arr_max - arr_min;
    // second part
    long long int max_count=0,min_count=0;
    for (int i = 0; i < num; i++)
    {
        if(arr_max==arr[i]) max_count++;
        if(arr_min==arr[i]) min_count++;
    }
    long long ways;
    if (arr_max==arr_min){
    ways = num*(num-1)/2;
    }
    else ways= max_count * min_count;
    cout << diff << " " << ways << endl;
    return 0;
}