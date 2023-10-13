#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = n + 1; i < m; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    if (count != 0)
    {
        cout << "NO";
    }
    else
    {
        if(isPrime(m))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }  
    }
    return 0;
}