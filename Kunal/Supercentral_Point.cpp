#include <iostream>
using namespace std;
int main()
{
    int n;
    int ans = 0;
    cin >> n;
    int arr_x[n+1], arr_y[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr_x[i] >> arr_y[i];
    }
    for (int i = 0; i < n; i++)
    {
        int left = 0, right = 0, up = 0, down = 0;
        int x = arr_x[i], y = arr_y[i];
        for (int i = 0; i < n; i++)
        {     
            if(arr_x[i]==x)
            {
                if(arr_y[i]>y)up++;
                if(arr_y[i]<y)down++;
            }
            if(arr_y[i]==y)
            {
                if(arr_x[i]>x)right++;
                if(arr_x[i]<x)left++;
            }                             
        }
        if(right > 0 && left > 0 && down > 0 && up > 0) ans++;  
    }
    cout << ans << endl;
    return 0;
}


            // if (x > arr_x[i])
            // {
            //     if (y == arr_y[i])
            //     {
            //         right = 1;
            //     }
            // }
            // if (x < arr_x[i])
            // {
            //     if (y == arr_y[i])
            //     {
            //         left = 1;
            //     }
            // }
            // if (y < arr_y[i])
            // {
            //     if (x == arr_x[i])
            //     {
            //         down = 1;
            //     }
            // }
            // if (y > arr_y[i])
            // {
            //     if (x == arr_x[i])
            //     {
            //         up = 1;
            //     }
            // }