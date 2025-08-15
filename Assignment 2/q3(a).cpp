#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[] = {1, 2, 4, 5, 6, 7, 8};
    int n = sizeof(v) / sizeof(int);
    int start = v[0];
    for(int i = 0; i < n; i++)
    {
        if (v[i] != i+1)
        {
            cout<<"Missing Number : " << i+1 << endl;
            break;
        }
    }
}
