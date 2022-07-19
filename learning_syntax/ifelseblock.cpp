#include <iostream>
using namespace std;
int main()
{

    // cout << "value of n is : " << n << endl;
    // if (n > 0)
    // {
    //     cout << n << " is positive";
    // }
    // else
    // {
    //     cout << n << " is negative";
    // }

    char ch;
    cout << "enter character" << endl;
    cin >> ch;

    if (ch >= 97 && ch <= 122)
    {
        cout << "lower case";
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "upper case";
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "digit";
    }
}