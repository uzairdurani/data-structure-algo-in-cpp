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

    // int arr[10] = {1, 12, 3};
    // cout << "address of first block is " << arr << endl;
    // cout << "value  of first block address is " << *arr << endl;
    // cout << "value  of first block address is after adding one " << (*arr) + 1 << endl;
    // cout << "value  of second block address is " << *(arr + 1) << endl;

    // double pointer
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    cout << endl
         << endl
         << "everything working" << endl
         << endl;
    cout << "address i " << &i << endl;
    cout << "printing p " << ptr << endl;

    cout << "address of p " << &ptr << endl;
    cout << "address of ptr2 " << *ptr2 << endl;

    cout << "value of p " << i << endl;
    cout << "value of ptr1 " << *ptr << endl;
    cout << "value of ptr2 " << **ptr2 << endl;
    return 0;
}
