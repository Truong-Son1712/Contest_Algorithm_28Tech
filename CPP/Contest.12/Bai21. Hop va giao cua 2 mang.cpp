#include<iostream>
#include<algorithm>
#include<set> 
#include<vector> 

using namespace std;

int main() 
{
	int n,m; cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i]; 
	sort(a,a+n);sort(b,b+m); 
	vector<int> giao;
	for(int i=0;i<n;i++){
		if(binary_search(b,b+m,a[i])) giao.push_back(a[i]); 
	} 
	set<int> hop;
	for(int i=0;i<n;i++) hop.insert(a[i]);
	for(int i=0;i<m;i++) hop.insert(b[i]);
	for(int i=0;i<giao.size();i++)
		cout<<giao[i]<<" ";
	cout<<endl;
	for(auto x:hop) 
		cout<<x<<" ";
	return 0; 
}
