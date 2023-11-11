#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a)
    {
        if(a%10==1) a/=10;
        else if (a%100==14) a/=100;
        else if (a%1000==144) a/=1000;
        else
        {
            cout << "NO";
            return 0;
        }  
    }
    cout << "YES";
    return 0;
}