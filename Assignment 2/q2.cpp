#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[] = {34, 55, 32, 78, 3, 6, 90};
    int n = sizeof(v) / sizeof(int);
    for(int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for(int j = 0; j < n - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
    for(auto it : v)
    {
    	cout<<it<<" ";
	}
}
