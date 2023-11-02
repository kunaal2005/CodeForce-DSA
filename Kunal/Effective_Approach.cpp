// 528ms -Runtime and 400kb -Memory
#include<iostream>
using namespace std;
int main(){
    int n,a,arr[100001];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        arr[a]= i;
    }
    int m,b;
    cin >> m;
    long long vasya=0,petya=0;
    while (m--)
    {
        cin >>b;
        vasya += arr[b];
        petya += (n +1 -arr[b]);
    }
    cout << vasya << " " << petya;
    return 0;
}



/*
// 530 ms -Time and 1200 kb -Memory

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // MAin Array input...
    int mainArr[n+1];
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        mainArr[i] = a;
    }
    // vasya & petya perspective
    // value interchange with index count.
    int vasya[n+1],petya[n+1];
    for (int i = 1; i <= n; i++)
    {
        vasya[mainArr[i]]=i;
        petya[mainArr[i]]=n+1-i;
    }
    // search queries inputs & comparision count
    int m;
    long long countv=0,countp=0;
    cin >> m;
    while (m--)
    {
        int b;
        cin >> b;
        countv+=vasya[b];
        countp+=petya[b];
    }
    cout << countv << ' ' << countp;
    return 0;
}
*/



/*
// the following code given an runtime error


#include <iostream>
using namespace std;
int main()
{
    int vasya=0,petya=0;
    int n;
    cin >> n;
    int arr[n];
    // Array input...
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    // number of queries
    int m;
    cin >> m;
    while (m--)
    {
        int b,temp=0;
        cin >> b;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]==b)
            {
                temp=j;
                vasya+=temp+1;
                break;
            }
        }
        petya+=n-temp;
    }
    cout << vasya << ' ' << petya;
    return 0;
}
*/