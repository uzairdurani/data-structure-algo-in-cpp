#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int sum = 0;
    int even = 0;
    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            even = even + i;
        }
        sum = sum + i;
        i = i + 1;
    }
    cout << "sum of number : " << sum << endl;
    cout << "sum of even numbers : " << even << endl;
    return 0;
}
