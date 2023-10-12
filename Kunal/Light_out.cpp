#include <iostream>
using namespace std;
int main()
{

    // array input karaya..
    int arr[5][5];
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i][0] = 0;
        arr[i][4] = 0;
        arr[0][i] = 0;
        arr[4][i] = 0;
    }

    // Answer array me value daali
    int arr2[3][3];
    int sum;
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {

            sum = arr[i][j] + arr[i - 1][j] + arr[i + 1][j] + arr[i][j - 1] + arr[i][j + 1];
            if (sum % 2 == 0)
            {
                arr2[i-1][j-1] = 1;
            }
            else
            {
                arr2[i-1][j-1] = 0;
            }
        }
    }

    // answer array print karaya
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j];
        }
        cout << endl;
    }
    return 0;
}