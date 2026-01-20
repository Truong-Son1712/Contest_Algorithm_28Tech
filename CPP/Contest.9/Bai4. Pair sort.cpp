#include<iostream>
#include<algorithm>
#include<math.h> 

using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b) 
{
	int d1= a.first*a.first+a.second*a.second ;
	int d2= b.first*b.first+b.second*b.second ;
	if(d1!=d2) return d1<d2;
	else{
		if(a.first!=b.first) return a.first<b.first;
		else return a.second<b.second; 
	} 
}
int main()
{
	int n; cin>>n;
	pair<int,int> a[n];
	for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++) cout<<a[i].first<<" "<<a[i].second<<endl;
	return 0; 
}
