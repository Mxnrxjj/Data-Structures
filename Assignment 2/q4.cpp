#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s , t;
    cin>>s>>t;
    int n = s.size() , m = t.size();
    
    // 4(A)
    string concatenated_string = s+t;
    cout<<concatenated_string<<endl;
    
    // 4(b)
    for(int i=0;i<n/2;i++){
        swap(s[i] , s[n-1-i]);
    }
    cout<<s<<endl;
    
    // 4(c)
    string result;
    string vow = "aeiou";

    for(int i=0;i<n;i++){
        bool found = false;
        for(int j=0;j<vow.size();j++){
            if(s[i]==vow[j]){
                found = true;
                break;
            }
        }
        if(!found){
            result+=s[i];
        }
    }
    cout<<result<<endl;
    

    // 4(d)
    const int x = 6;
    char arr[x][100] = {"london", "america", "libya", "kenya", "czech", "amsterdam"};
    for(int i = 0; i < x - 1; i++) {
        for (int j = 0; j < x - 1 - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[20];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
    for(int i = 0; i < 6; i++)
    {
    	cout<<arr[i]<<" ";
	}
	cout<<endl;

    // 4(e)
    int c; cin>>c;
    if(c >= 'a' && c <= 'z') {
        c -= 32;
    }
    cout<<c<<endl;

}
