#include <iostream>
using namespace std;

// _________________ pattern 1 _____________________________
// 1
// 1 2
// 1 2 3
// 1 2 3 4

// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             cout << col << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }

// _________________ pattern 2 _____________________________

// 1
// 2 3
// 3 4 5
// 4 5 6 7

// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         int value = row;
//         while (col <= row)
//         {
//             cout << value << " ";
//             value = value + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }

// _________________ pattern 3 _____________________________

// 1
// 2 3
// 3 4 5
// 4 5 6 7

// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;

//         while (col <= row)
//         {
//             cout << row + col - 1 << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }

// _________________ pattern 3 _____________________________

// 1
// 2 1
// 3 2 1
// 4 3 2 1

// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;

//         while (col <= row)
//         {
//             cout << row - col + 1 << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }

// _________________ pattern 3 _____________________________

// A A A
// B B B
// C C C

// int main()
// {

//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n)
//         {
//             char ch = 'A' + row - 1;

//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }

// _________________ pattern 3 _____________________________

// A
// B C
// D E F
// G H I J

// int main()
// {

//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n)
//         {

//             cout << row + col - 1 << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }

// _________________ pattern 3 _____________________________

//       *
//     * *
//   * * *
// * * * *

// int main()
// {

//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int space = n - row;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int col = 1;
//         while (col <= row)
//         {
//             cout << "*";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }

//     return 0;
// }

// _________________ pattern 3 _____________________________

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

int main()
{

    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int j = 1;
        while (j <= n - row + 1)
        {
            cout << j << " ";
            j = j + 1;
        }

        j = 1;
        while (j <= (row - 1) * 2)
        {
            cout << "*"
                 << " ";
            j = j + 1;
        }
        j = n - row + 1;
        while (j >= 1)
        {
            cout << j << " ";
            j = j - 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}
