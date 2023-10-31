#include<iostream>
using namespace std;
int main(){
    int t;
    int cl=0,cr=0;
    int count=0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int l, r;
        cin >> l >> r;
        if(l==1) cl++;
        if(r==1) cr++;
    }
    if(cl>(t/2))
    {
        count+=t-cl;
    }
    else count+=cl;
    if(cr>(t/2))
    {
        count+=t-cr;
    }
    else count+=cr;
    cout << count;
    return 0;
}