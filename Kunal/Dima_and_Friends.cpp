#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int f;
        cin >> f;
        sum+=f;
    }
    int p=sum%(n+1);
    int count=0;
    for (int i = 1; i <= 5; i++)
    {
        p++;
        if (p>n+1)
        {
            p=1;
        }
        else if (p!=1)
        {
            count++;
        }
    }
    cout << count;  
    return 0;
}