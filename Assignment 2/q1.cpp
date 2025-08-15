#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[] = {3, 7, 14, 19, 25, 31, 42, 56, 68, 77};
    int n = sizeof(v)/sizeof(v[0]);
    int el;
    cin>>el;
    int beg = 0, end = n-1;
    while (end >= beg)
    {
        int mid = (beg + end) / 2;
        if (v[mid] == el)
        {
            cout << "Element Found At Index" << ' ' << mid;
            break;
        }
        else if (v[mid] < el)
        {
            beg = mid + 1;
        }
        else
            end = mid - 1;
    }
}
