#include <iostream>
using namespace std;
int main()
{
    int n;
    int max_value = 0, min_value = 100; // to store min and max value
    int max, min;                     // to store index
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a > max_value)
        {
            max = i;
            max_value = a;
        }
        if (a <= min_value)
        {
            min = i;
            min_value = a;
        }
    }
    if (max > min)
    {
        cout << (max - 1) + (n - min) - 1;
    }
    else
    {
        cout << (max - 1) + (n - min);
    }
    return 0;
}