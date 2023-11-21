#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    double m;
    cin >> n >> m;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
        if(arr[i]<=m) arr[i]=0;
    }
    double temp = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if(ceil(arr[i]/m)>=temp)
        {
            temp=ceil(arr[i]/m);
            ans=i;
        // another tried approch (second comment out paragraph)
        }
    }
    cout << ans;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int tc, choc_num, num;
//     deque<pair<int,int>>req;
//     cin >> tc >> choc_num;
//     for (int i = 1; i <= tc; i++)
//     {
//         cin >> num;
//         req.push_back(make_pair(i,num));
//     }
//     while (req.size()>1)
//     {
//         if(req.front().second - choc_num <=0)
//         {
//             req.pop_front(); // goes home
//         }
//         else if(req.front().second-choc_num >0)
//         {
//             // req.front(.second -= choc_num);
//         }
//     }

//     return 0;
// }



        // int ans2 = ans;
        // temp = temp2;
        // temp2 = arr[i] / m;
        // if (temp2 > temp && arr[i]%m==0)
        // {
        //     ans = i;
        // }
        // else if (temp2 = temp && arr[i]%m==0)
        // {
        //     if (temp2 > temp)
        //     {
        //         ans = i;
        //     }
        // }
        // else ans=i;