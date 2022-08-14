#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    // int value = 10;
    // int *p = &value;
    // *p = 200;
    // cout << value << endl;
    // cout << &value << endl;
    // cout << &p << endl;
    // cout << p << endl;

    int arr[10] = {1, 12, 3};
    cout << "address of first block is " << arr << endl;
    cout << "value  of first block address is " << *arr << endl;
    cout << "value  of first block address is after adding one " << (*arr) + 1 << endl;
    cout << "value  of second block address is " << *(arr + 1) << endl;

    return 0;
}
