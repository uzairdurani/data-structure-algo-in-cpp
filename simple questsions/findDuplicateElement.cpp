#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findDuplicateElement(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        // cout << "xor value of " << ans << " and ";
        ans = ans ^ arr[i];
        // cout << arr[i] << " = " << ans << endl;
    }

    cout << "first xor operation done " << ans << endl;

    for (int i = 1; i < size; i++)
    {
        cout << "xor value of " << ans << " and ";
        ans = ans ^ i;
        cout << i << " = " << ans << endl;
    }
    cout << "second xor operation done " << ans << endl;
    return ans;
}
int main()
{
    int arr[5] = {4, 2, 1, 3, 1};
    int value = findDuplicateElement(arr, 5);
    printArray(arr, 5);
    cout << value << endl;
    int val = 1 ^ 1;
    cout << val << endl;
    return 1;
}