#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int i;
    while (n--)
    {
        cin >> i;
        arr.push_back(i);
    }
    int mini = INT_MAX;
    for (int i : arr)
    {
        if (abs(i) < abs(mini))
        {
            mini = i;
        }
    }
    int count = 0;
    if (mini < 0)
    {
        while (mini < 0)
        {
            count++;
            mini++;
        }
    }
    else
    {
        while (mini > 0)
        {
            count++;
            mini--;
        }
    }
    cout << count;
    return 0;
}