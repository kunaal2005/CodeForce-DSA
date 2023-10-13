#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    string s1;
    cin >> n;
    cin >> s1;
    for (int i = 0; i < n; ++i)
    {
        if (s1[i] == s1[i + 1])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}