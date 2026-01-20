#include<iostream>
#include<numeric>
#include<algorithm> 

using namespace std;

bool check(int a[],int n,int k,long long sum)
{
	int dem=1;
	long long tong=0;
	for(int i=0;i<n;i++){
		tong+=a[i];
		if(tong>sum){
			++dem;
			tong=a[i]; 
		} 
	} 
	return dem<=k; 
} 
int main()
{
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i]; 
	long long l=*max_element(a,a+n), r=accumulate(a,a+n,0),ans=-1 ;
	while(l<=r){
		long long mid=(l+r)/2;
		if(check(a,n,k,mid)){
			ans=mid;
			r=mid-1; 
		} else l=mid+1; 
	} 
	cout<<ans;
	return 0; 
} 
