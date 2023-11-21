/*THE FOLLOWING CODE IS USING unordered_map WHICH HAS
  THE TIME COMPLEXECITY OF log (n) SO NOT GOOD FOR LARGE DATA*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    string s;
    cin >> k >> s;
    unordered_map<char,int> m;
    for (auto x:s)
    {
        m[x]++;
    }
    string ans="";
    for(auto x: m)
    {
        if(x.second%k)
        {
            cout << -1;
            return 0;
        }
        else
        {
            ans+=string(x.second/k,x.first);
        }
    }
    for (int i = 0; i <k; i++)
    {
        cout << ans;
    }
    cout << endl;
    return 0;
}



/*CODE WHICH HAS THE CONSTAINT TIME COMPLEXITY O(1)*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // yet to create...
//     return 0;
// }