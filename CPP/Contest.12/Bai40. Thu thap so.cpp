#include<iostream>
#include<algorithm> 
#include<vector> 

using namespace std;

int main() 
{
	int n; cin>>n;
	pair<int,int> a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].first;
		a[i].second=i; 
	}
	sort(a,a+n); 
	int res=1; 
	for(int i=1;i<n;i++){
		if(a[i].second<a[i-1].second)
		res++; 
	} 
	cout<<res;
	return 0; 
}
