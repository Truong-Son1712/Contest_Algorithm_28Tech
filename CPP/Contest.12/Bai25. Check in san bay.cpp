#include<iostream>
#include<algorithm> 

using namespace std;

int main() 
{
	int n; cin>>n;
	pair<int,int> a[n];
	for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
	sort(a,a+n);
	long long time=0;
	for(int i=0;i<n;i++){
		time=max((long long)a[i].first,time) +a[i].second; 
	} 
	cout<<time;
	return 0; 
}
