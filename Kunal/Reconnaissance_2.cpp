#include<iostream>
using namespace std;
int main(){
    // Input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // logic
    int temp=abs(arr[0]-arr[n-1]);
    int o1=0,o2=n-1;
    for (int i = 0; i < (n-1); i++)
    {
        int absolute= abs(arr[i]-arr[i+1]);
        if(temp > absolute)
        {
            o1=i;
            o2=i+1;
            temp=absolute;
        }
    }
    // output
    cout << o1+1 << " " << o2+1;
    return 0;
}