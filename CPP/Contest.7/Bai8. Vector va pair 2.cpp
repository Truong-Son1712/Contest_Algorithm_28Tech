#include<iostream>
#include<iomanip>
#include<vector>
#include<math.h> 

using namespace std;

int main()
{
	int n; cin>>n;
	vector<pair<pair<int,int>,int> > a(n);
	vector<int> tong(n);
	for(int i=0; i<n; i++)
		cin>>a[i].first.first>>a[i].first.second>>a[i].second;
	for(int i=0; i<n; i++)
		tong[i]=a[i].first.first+a[i].first.second+a[i].second;
	for(int i=0; i<n; i++)
		cout<<tong[i]<<" ";
	return 0; 
 } 
