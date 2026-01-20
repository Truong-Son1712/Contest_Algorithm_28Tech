#include<iostream>
#include<vector> 
#include<algorithm> 

using namespace std;

int main() 
{
	int n,m; cin>>n>>m;
	vector<int> a[n+1];
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		a[x].push_back(y); 
	}
	for(int i=1;i<=n;i++){
		sort(a[i].begin(),a[i].end()); 
		cout<<i<<" : "; 
		for(int x:a[i]) cout<<x<<" ";
		cout<<endl; 
	} 
	return 0; 
}
