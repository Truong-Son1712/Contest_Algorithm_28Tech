#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b) 
{
	if(a.second%2==0&&b.second%2!=0) return a>=b;
	else if(a.second%2!=0&&b.second%2==0) return a<=b; 
}
int main() 
{
	vector<pair<int,int> >v;
	int n; cin>>n;
	int a[n];
	for(int i=0;i,n;i++){
		cin>>a[i];
		v.push_back({a[i],i}) ;
	} 
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++)
		cout<<v[i].first<<" ";
	return 0; 
}
