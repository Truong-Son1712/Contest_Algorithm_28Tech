#include<iostream>

using namespace std;

bool check(int a,int b,int n,long long x) 
{
	long long res=(x/a)*(x/b);
	return res>=n; 
}
int main() 
{
	int a,b,n; cin>>a>>b>>n;
	long long l=max(a,b),r=max(a,b)*n,ans=-1;
	while(l<=r){
		long long mid=(l+r)/2;
		if(check(a,b,n,mid)){
			ans=mid;
			r=mid-1; 
		} else l=mid+1; 
	} 
	cout<<ans;
	return 0; 
}
