#include<bits/stdc++.h>
using namespace std;
void solve(int arr[], int n){
	unordered_set<int> st;
	vector<int> res;
	for(int i = 0; i < n; i++)
	{
		if(st.find(arr[i]) == st.end())
		{
			st.insert(arr[i]);
			res.push_back(arr[i]);
		}
			
	}
	for(auto it : res)
	{
		cout<<it<<" ";
	}
	cout<<endl;
}

int main()
{
	int arr[8] = {2, 4, 4, 7, 6, 6, 2, 4};
	solve(arr, 8);
}
