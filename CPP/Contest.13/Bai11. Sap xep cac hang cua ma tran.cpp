#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	for(int i=0;i<n;i++){
		vector<int>v;
		for(int j=0;j<n;j++)
			v.push_back(a[i][j]);
		sort(v.begin(),v.end());
		for(int j=0;j<n;j++) cout<<v[j]<<" ";
		cout<<endl; 
	} 
	return 0; 
}
