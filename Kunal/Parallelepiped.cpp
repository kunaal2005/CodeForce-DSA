#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    double l,b,h;
    l=sqrt((x*z)/y);
    b=sqrt((y*x)/z);
    h=sqrt((y*z)/x);
    cout << 4*(l+b+h) << endl;
    return 0;
}