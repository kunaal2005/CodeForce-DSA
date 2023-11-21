#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2]; // temp arr

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l; // sorting by selection sort.
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r) // sort in accending order
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid); // recursive seperation of array in two sub parts.
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}
int main()
{
    // input..
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    // operations
    int min = 0;
    mergeSort(arr, 0, m - 1);
    // for min
    int temp[m];
    for (int i = 0; i < m; i++)
    {
        temp[i] = arr[i];
    }
    int i = 0;
    int temp_n = n;
    while (n)
    {
        if (temp[i] > 0)
        {
            min += temp[i];
            temp[i] -= 1;
        }
        n--;
        if (temp[i] == 0)
            i++;
    }
    // for max
    int maxed = 0;
    int M = m -1;
    while (temp_n)
    {
        if(M==0) break;
        maxed += arr[M];
        arr[M] = arr[M] - 1;
        if (arr[M - 1] > arr[M])
        {
            M--;
        }
        temp_n--;
    }
    // int q=0;
    // while(temp_n)
    // {
    //     maxed += arr[q];
    //     arr[q] = arr[q]-1;
    //     if(arr[q]<arr[q+1])
    //     {
    //         q++;
    //     }
    //     temp_n--;
    // }
    // cout << maxed << " " << min;
    multiset<int,greater<int>>maxi;
    for(int i=0;i<m;i++)
    {
        maxi.insert(arr[i]);
    }
    int total=0;
    for(int i=0;i<n;i++)
    {
        int x=*maxi.begin();
        total+=x;
        maxi.erase(maxi.lower_bound(x));
        --x;
        if(x>0)maxi.insert(x);
    }
    cout << total << " "<< min;
    return 0;
}