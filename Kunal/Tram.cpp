#include <iostream>
using namespace std;
int main()
{
    int n, a, b, x = 0, max = 0;
    cin >> n;
    for (int i=0; i < n; i++)
    {
        cin >> b >> a;
        x = a - b + x;
        if (max < x)
        {
            max = x;
        }
    }
    cout << max;
    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int ta=0,y;
//     int ans=0;
//     while (n--)
//     {
//         int a,b;
//         int x=0;
//         cin >> b >> a;
//         x=a-b;
//         y=ta;
//         ta+=x;
//         if(y<ta) ans=ta;
//     }
//     cout << ans;
//     return 0;
// }