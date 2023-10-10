#include <iostream>
using namespace std;
int main()
{
    int n, t, i, j;
    cin >> n >> t;
    if (n >= 1 && t <= 50)
    {
        char arr[n];
        cin >> arr; 
        for (i = 0; i < t; i++)
        {
            for (j = 0; arr[j] != '\0'; j++)
            {
                if (arr[j] == 'B' && arr[j + 1] == 'G')
                {
                    arr[j] = 'G';
                    arr[j + 1] = 'B';
                    j++;    
                }
            }
        }
        cout << arr;
    }
    return 0;
}