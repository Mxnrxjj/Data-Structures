#include <bits/stdc++.h>
using namespace std;
class Solution
{
	int *a, maxSize, top = -1;
public:
	void create()
	{
		cout<<"\nEnter Size Of Array : ";
		cin>>maxSize;
		a = new int[maxSize];
	}
	void display()
	{
		if(top == -1)
		{
			cout<<"\nUnderflow\n";
			return;
		}
		for(int i = 0; i <= top; i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	void insert()
	{
		if (top == maxSize-1) 
		{
            cout << "\nOverflow\n";
            return;
        }
        int val;
        cout<<"Enter value to insert: ";
        cin >> val;
		top++;
        a[top] = val;
        cout<<val<<" inserted successfully\n";
	}
	void deletion()
	{
		if(top == -1)
		{
			cout<<"\nUnderflow\n";
			return;
		}
		cout<<"\nElement "<<a[top]<<" Deleted Successfully\n";
		top--;
	}
	void search()
	{
		if (top == -1) {
            cout<<"\nUnderflow\n";
            return;
        }
        int val;
        cout<<"Enter value to search: ";
        cin >> val;
        for (int i = 0; i <= top; i++) {
            if (a[i] == val) {
                cout << "Value found at position " << i + 1 << endl;
                return;
            }
        }
        cout<<"\nValue not found\n";
    }
};

int main() {
	Solution obj;
	while(1)
	{
		int ch;
		cout<<"\n----MENU----";
		cout<<"\n1. CREATE";
		cout<<"\n2. DISPLAY";
		cout<<"\n3. INSERT";
		cout<<"\n4. DELETE";
		cout<<"\n5. LINEAR SEARCH";
		cout<<"\n6. EXIT";
		cout<<"\nEnter Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				obj.create();
				break;
			case 2:
				obj.display();
				break;
			case 3:
				obj.insert();
				break;
			case 4:
				obj.deletion();
				break;
			case 5:
				obj.search();
				break;
			case 6:
				cout<<"\nExiting...";
				return 0;
				
		}
	}
}

