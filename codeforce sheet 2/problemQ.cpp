#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string number;
		cin>>number;
		for(int i =number.size()-1;i>=0;i--)
        { 
			cout<<number[i]<<" ";
		}
		cout<<endl;
	}
}