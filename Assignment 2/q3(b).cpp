#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &arr, int n) {
    int beg = 0, end = arr.size() - 1;
    while (beg <= end) {
        int mid = (beg + end) / 2;
        if (arr[mid] == mid + 1)
            beg = mid + 1;
        else
            end = mid - 1;
    }
    return beg + 1;
}
int main()
{
    vector<int> v = {1, 2, 4, 5, 6, 7, 8};
    int n = sizeof(v) / sizeof(int);
    int el = solve(v, n);
    cout << "Missing Number: " <<el;
}
