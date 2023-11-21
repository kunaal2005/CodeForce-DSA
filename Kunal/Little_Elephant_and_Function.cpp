// not working

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==1)
    {
        cout << 1;
        return 0;
    }
    while (n>1)
    {
        for (int i = 1; i <= n; i++)
        {
            int temp = i+1;   
            cout << temp << " " << temp-1 << " ";
            i++;
        }
        return 0;
    } 
    return 0;
}