#include<iostream>
#include<algorithm>

using namespace std;

bool cmp(pair<int,int> a,pair<int,int>b) 
{
	if(a.second!=b.second) return a.second<b.second;
	else{
		 return a.first>b.first; 
	} 
}
int main() 
{
	int n; cin>>n; 
	pair<int,int> a[n];
	for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
	sort(a,a+n,cmp); 
	for(int i=0;i<n;i++)
		cout<<a[i].first<<" "<<a[i].second<<endl;
	return 0; 
}
