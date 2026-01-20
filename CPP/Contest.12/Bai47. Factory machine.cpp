#include<algorithm>
#include<iostream>

using namespace std;

bool check(int a[],int n,int t,long long time) 
{
	long long dem=0;
	for(int i=0;i<n;i++){
		dem+=time/a[i];
		if(dem>=t) return true; 
	} 
	return dem>=t ;
}
int main() 
{
	int n,t; cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	long long l=0,r=(long long)(*min_element(a,a+n))*t,ans=-1;
	while(l<=r){
		long long mid=(l+r)/2;
		if(check(a,n,t,mid)){
			ans=mid;
			r=mid-1; 
		} else l=mid+1; 
	} 
	cout<<ans;
	return 0; 
}
