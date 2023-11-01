#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr=0;
    int count=0,ans=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr;
            count+=arr;
        }
        if(count>1)
        {
            ans++;
        }
        count=0;
    }
    cout << ans;
    return 0;
}