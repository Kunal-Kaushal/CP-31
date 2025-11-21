#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int size;
        cin >> size;
        vector<int> arr;
        int input;
        int cnt = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> input;
            arr.push_back(input);
            if (input == 2)
                cnt++;
        }
        if (cnt == 0)
            cout << 1 << endl;
        else if (cnt % 2 != 0)
            cout << -1 << endl;
        else
        {
            cnt /= 2;
            for (int i = 0; i < size; i++)
            {
                if (arr[i] == 2)
                    cnt--;
                if (cnt == 0)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}