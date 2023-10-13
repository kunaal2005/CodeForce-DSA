#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2 ,s3="";
    cin >> s1;
    cin >> s2;
    int n = 0;
    n = s1.length();
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[i])
        {
            s3.append("0");

        }
        else
        {
            s3.append("1");
        }
    }
    cout << s3;
    return 0;
}