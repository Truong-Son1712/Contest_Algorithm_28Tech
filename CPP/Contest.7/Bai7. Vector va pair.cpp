#include<iostream>
#include<iomanip>
#include<vector>
#include<math.h> 

using namespace std;

int main()
{
	int n; cin>>n;
	vector<pair<int,int> > a(n);
	vector<double> luu(n);
	for(int i=0;i<n;i++)
		cin>>a[i].first>>a[i].second;
	for(int i=0;i<n;i++)
		luu[i]=sqrt(a[i].first*a[i].first+a[i].second*a[i].second);
	cout<<fixed<<setprecision(2);
	for(int i=0;i<n;i++)
		cout<<luu[i]<<" ";
	return 0; 
 } 
