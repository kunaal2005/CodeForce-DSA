#include<iostream>
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

    int i = 0, j = 0, k = l;  //sorting by selection sort.
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
        mergeSort(arr, l, mid); //recursive seperation of array in two sub parts.
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}
int main(){
    int k,arr[13];
    cin >> k;
    int sum=0;
    for (int i = 1; i <= 12; i++)
    {
        cin >> arr[i];
    }
    if(k==0)
    {
        cout << 0;
        return 0;
    }
    mergeSort(arr,1,12);
    for (int i = 12; i >= 1; i--)
    {
        sum+=arr[i];
        if(sum>=k)
        {
            cout << 13-i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}