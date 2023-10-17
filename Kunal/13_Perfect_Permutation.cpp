#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    if (n % 2 == 1)
    {
        cout << "-1";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i]+=arr[i+1];
            arr[i+1]=arr[i]-arr[i+1];
            arr[i]=arr[i]-arr[i+1];
            // int temp = 0;
            // temp = arr[i];
            // arr[i] = arr[i + 1];
            // arr[i + 1] = temp;
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }    
    }
    return 0;
}