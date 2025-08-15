#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, n;
	cout<<"Enter no. of rows : ";
	cin>>m;
	cout<<"Enter no. of columns : ";
	cin>>n;
	int arr[m][n];
	
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			cin>>arr[i][j];
			
	int res[n][m];
	
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			res[j][i] = arr[i][j];
			
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
			cout<<res[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
