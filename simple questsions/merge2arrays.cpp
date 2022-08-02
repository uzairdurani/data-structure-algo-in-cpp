#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
            // k++;
            // i++;
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    // for remaining element in first array
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    // for remaining element in second array
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

void printVector(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};
    vector<int> a = {11, 2, 4, 1, 1};
   
  

    // merge(arr1, arr2, 5, 3, arr3);
    // cout
    // << "after sorting array : ";
    // printVector(arr3, 8);

    return 0;
}