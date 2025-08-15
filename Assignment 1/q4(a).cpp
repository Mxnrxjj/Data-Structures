#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
	int i = 0, j = n-1;
	while(i<j)
	{
		swap(arr[i], arr[j]);
		i++; j--;
	}
}

int main()
{
	int arr[8] = {2, 4, 4, 7, 6, 6, 2, 4};
	solve(arr, 8);
	for(auto it : arr)
		cout<<it<<" ";
	return 0;
}
