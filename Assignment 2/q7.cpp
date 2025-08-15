#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count=0;
    cin>>n;
    vector<int> A(n);
    for(int i = 0; i < n; i++)
    	cin>>A[i];
    	
    for(int i = 0; i < n; i++)
    	for(int j = i+1; j < n; j++)
    		if(A[i]>A[j])
    			count++;
    			
    cout<<"\nInversions : "<<count;
    return 0;
}

