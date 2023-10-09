#include<iostream>
using namespace std;

int main(){
    int x=0,y=0,z=0,i=0,j=0,k=0;
    int n;
    cin>>n;
    if(n<=100 && n>=1)
    {
        while(n--)
        {
            cin>>x>>y>>z;
            if (x >= -100 && x <= 100 && y >= -100 && y <= 100 && z >= -100 && z <= 100)
            {
                i=i+x;
                j=j+y;
                k=k+z;
            }
        }
        if(i==0 && j==0 && k==0)
        {
            cout<< "YES";
        }
        else cout<< "NO";   
    }
    return 0;
}