#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int space=n*2;
    int temp=2;
    int temp2=n;
    int x;
    for (int i = 0; i < (n * 2) + 1; i++)
    {
        if (i <= n)
        {
            for (int i = 0; i < space; i++)
            {
                cout << " ";
            }
            space-=2;
            for (int j = 0; j < i; j++)
            {
                cout << j << " ";
            }
            for (int j = i; j >= 0; j--)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        else
        {
            //spece
            for (int i = 0; i < temp; i++)
            {
                cout << " ";
            }
            temp+=2;
            for (int j = 0; j < temp2; j++)
            {
                cout << j << " ";
                x= j;
            }
            temp2--;
            for (int j = x-1; j >= 0; j--)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}