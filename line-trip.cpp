#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> points_arr;
        points_arr.push_back(0);   // starting point
        for (int i = 0; i < n; i++) {
            long long point;
            cin >> point;
            points_arr.push_back(point);
        }
        points_arr.push_back(x);   // ending point
        n = points_arr.size();

        long long max_dis = 0;

        for (int i = 1; i < n; i++) {
            if (i == n - 1) {
                // last segment, double it
                max_dis = max(max_dis, 2 * (points_arr[i] - points_arr[i - 1]));
            } else {
                max_dis = max(max_dis, points_arr[i] - points_arr[i - 1]);
            }
        }

        cout << max_dis << "\n";
    }
    return 0;
}