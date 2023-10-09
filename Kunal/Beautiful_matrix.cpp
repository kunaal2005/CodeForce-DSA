#include<iostream>
#include<cmath>
using namespace std;
void main(){
    int a[5][5],i,j,r,c;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
            {
                r=abs(3-i);
                c=abs(3-j);
            }
        }
    }
    cout << r+c;
}