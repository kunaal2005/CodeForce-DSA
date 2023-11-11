#include <iostream>
using namespace std;
int main()
{
    int n, ans;
    cin >> n >> ans;
    int arr[n];
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            arr[j] = i;
            j++;
        }
        else
        {
            arr[(n/2)+j]=i;
            j++;    
        }
    }
    cout << arr[ans-1];
    return 0;
}

// Time limit exceeded on test 8

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,ans;
//     cin >> n >> ans;
//     int arr[n];
//     int j = 0;
//     if (n % 2 == 0)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (i % 2 != 0)
//             {
//                 arr[j] = i;
//                 j++;
//             }
//         }
//         j = n/2;
//         for (int i = 1; i <= n; i++)
//         {
//             if(i % 2 ==0)
//             {
//                 arr[j]=i;
//                 j++;
//             }
//         }
//     }
//     else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (i % 2 != 0)
//             {
//                 arr[j] = i;
//                 j++;
//             }
//         }
//         j = (n/2)+1;
//         for (int i = 1; i <= n; i++)
//         {
//             if(i % 2 ==0)
//             {
//                 arr[j]=i;
//                 j++;
//             }
//         }
//     }
//     cout << arr[ans-1];
//     return 0;
// }