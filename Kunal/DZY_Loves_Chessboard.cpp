#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<string> str;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin >> temp;
        str.push_back(temp);
    }
    for(int i=0; i<n; i+=1)
    {
        for(int j=0; j<m; j+=1)
        {
            if(str[i][j] == '-')cout <<"-";
            else if(((i%2== 0 && j%2 ==0) || (i%2==1 && j%2==1) && str[i][j]=='.'))
            {
                cout << "B";
            }
            else
            {
                if((str[i][j]=='.'))
                {
                    cout << "W";      
                }
            }
        }
        cout << endl;
    }
    return 0;
}