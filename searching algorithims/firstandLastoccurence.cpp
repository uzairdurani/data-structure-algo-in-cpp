#include <iostream>
using namespace std;

int firstOcc(int arr[], int key, int n)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int lasttOcc(int arr[], int key, int n)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int even[6] = {1, 3, 2, 3, 4, 5};
    int odd[5] = {1, 2, 3, 3, 5};
    int key = 3;
    int firstValue = firstOcc(odd, key, 5);
    int lastValue = lasttOcc(odd, key, 5);
    cout << "firt occurence of " << key << " is : " << firstValue << endl;
    cout << "last occurence of " << key << " is : " << lastValue;
    return 1;
}