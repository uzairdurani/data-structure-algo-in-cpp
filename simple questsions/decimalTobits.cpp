#include <iostream>
#include <math.h>
using namespace std;

// decimal to binary
// int main()
// {
//     int ans;
//     int n;
//     cin >> n;
//     int i = 0;
//     while (n != 0)
//     {
//         int bit = n & 1;
//         ans = (bit * pow(10, i) + ans);
//         n = n >> 1;
//         i++;
//     }
//     cout << "Answers is: " << ans;
//     return 0;
// }

//  binary to decimal
int main()
{
    int ans;
    int i = 0;
    int n;
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        i++;
        n = n / 10;
    }
    cout << "Answers is: " << ans;
    return 0;
}