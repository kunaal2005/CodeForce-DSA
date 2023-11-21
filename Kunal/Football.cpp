#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    string temp1=str[0];
    string temp2;
    int count1=0,count2=0;
    for (int i = 0; i < n; i++)
    {
        if(temp1 == str[i])
        {
            count1++;  
        }
        else{
            temp2= str[i];
            count2++;
        }
    }
    if(count1>count2)
    {
        cout << temp1 <<endl;
    }
    else{
        cout << temp2 << endl;
    }
    return 0;
}