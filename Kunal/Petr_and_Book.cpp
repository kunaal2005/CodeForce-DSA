#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    int count = 0, i = 0;
    while (n > 0)
    {
        count++;
        n -= arr[i % 7];
        i++;
        if (n <= 0) break;
    }
    if (count % 7 == 0)
    {
        cout << 7;
    } else cout << count%7;
    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int a,b,c,d,e,f,g;
//     cin >> a >> b >> c >> d >> e >> f >> g;
//     int temp=n%(a+b+c+d+e+f+g);
//     if(temp-a<=0)
//     {
//         cout<< 1;
//     }
//     else if (temp-(b+a)<=0)
//     {
//         cout << 2;
//     }
//     else if (temp-(a+b+c)<=0)
//     {
//         cout << 3;
//     }
//     else if (temp-(a+b+c+d)<=0)
//     {
//         cout << 4;
//     }
//     else if (temp-(a+b+c+d+e)<=0)
//     {
//         cout << 5;
//     }
//     else if (temp-(a+b+c+d+e+f)<=0)
//     {
//         cout << 6;
//     }
//     else if (temp-(a+b+c+d+e+f+g)<=0)
//     {
//         cout << 7;
//     }
//     return 0;
// }