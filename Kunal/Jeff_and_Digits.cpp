#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i]=a;
    }
    int count=0;
    int zero=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==5) count++;
        else if(arr[i]==0) zero++;
    }
    if(zero>0)
    {
        if(count/9>0)
        {
            for (int i = 0; i < count-(count%9); i++)
            {
                cout << 5;
            }
            for (int i = 0; i < zero; i++)
            {
                cout << 0;
            }
        }
        else cout << 0 << endl;
    }
    else cout << -1 << endl;
    return 0;
}