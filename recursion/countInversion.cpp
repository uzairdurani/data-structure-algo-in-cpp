#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long merge(int *arr, int left, int mid, int right)
{
    int i = left, j = mid, k = 0;
    long long invCount = 0;
    int temp[(right - left + 1)];

    while ((i < mid) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            invCount += (mid - i);
        }
    }

    while (i < mid)
    {
        temp[k++] = arr[i++];
        
    }

    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (i = left, k = 0; i <= right; i++, k++)
    {
        arr[i] = temp[k];
    }

    return invCount;
}
long long mergeSort(int *arr, int left, int right)
{
    long long invCount = 0;

    if (right > left)
    {
        int mid = (right + left) / 2;
        invCount = mergeSort(arr, left, mid);
        invCount += mergeSort(arr, mid + 1, right);
        invCount += merge(arr, left, mid + 1, right);
    }
    return invCount;
}

long long getInversions(int *arr, int n)
{
    return mergeSort(arr, 0, n - 1);
}

int main()
{

    // int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int arr[5] = {1,
                  20,
                  6,
                  4,
                  5};

    int n = 5;

    int val = mergeSort(arr, 0, n - 1);
    cout << val;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << endl;

    return 0;
}