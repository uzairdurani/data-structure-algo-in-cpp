#include <iostream>
#include <vector>
using namespace std;
vector<int> reversefrom(vector<int> v, int m)
{
    int s = m + 1, e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
vector<int> reverse(vector<int> v)
{
    int s = 0, e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void printVector(vector<int> a)
{
    for (int i : a)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    cout << "Before revesing array : ";
    printVector(v);
    cout << endl
         << "after revesing array : ";

    vector<int> ans = reverse(v);
    printVector(ans);
    return 0;
}