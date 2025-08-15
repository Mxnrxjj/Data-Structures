#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, cols;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;
    
    vector<vector<int>> arr(rows, vector<int>(cols));
    
    cout<<"Enter elements: \n";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin>>arr[i][j];
            
    cout<<"\nSum of each row: \n";
    for (int i = 0; i < rows; i++) 
	{
		int sum = 0;
		for(int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
		cout<<"Sum Of Row "<< i+1<<": "<<sum<<endl;
    }
    cout<<"\nSum of each column: \n";
    for (int i = 0; i < cols; i++) 
	{
		int sum = 0;
		for(int j = 0; j < rows; j++)
		{
			sum += arr[j][i];
		}
		cout<<"Sum Of Column "<< i+1<<": "<<sum<<endl;
    }
        
}

