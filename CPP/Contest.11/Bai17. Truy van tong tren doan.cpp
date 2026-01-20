#include<iostream>
#include<vector> 
#include<numeric>

using namespace std;

void nhap(vector<int>&v,int n) 
{
	for(int i=0;i<n;i++)
		cin>>v[i]; 
}
int main() 
{
	int n; cin>>n;
	vector<int> v(n); 
	nhap(v,n) ;
	int Q; cin>>Q;
	for(int i=0;i<Q;i++){
		int l,r;cin>>l>>r;
		l--;r--; 
		long long sum=0;
		for(int j=l;j<=r;j++)
			sum+=v[j]; 
		cout<<sum<<endl; 
	} 
	return 0; 
}
