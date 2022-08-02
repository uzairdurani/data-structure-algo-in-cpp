#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    int nums[10] = {0};
    int n = 5;
    int arr[n];
    std::fill_n(arr, n, 1);
    cout << nums[0] << endl;
    cout << arr[0] << endl;

    return 0;
}
