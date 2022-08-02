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

void swapAlternate(int arr[], int size)
{
    for (int i = 1; i < size; i += 2)
    {
        swap(arr[i - 1], arr[i]);
    }
}

int main()
{
    int even[6] = {1, 3, 2, 7, 11, 8};
    int odd[5] = {2, 1, 6, 9, 2};
    swapAlternate(even, 6);
    printArray(even, 6);
    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}