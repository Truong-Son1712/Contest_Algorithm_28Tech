#include<iostream>

using namespace std;

int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int &x:a) cin>>x;
	long long sum=0,idx=0;
	for(int i=0;i<k;i++){
		sum+=a[i]; 
	} 
	long long ans=sum;
	for(int i=k;i<n;i++){
		sum=sum-a[i-k]+a[i];
		if(sum>ans){
			ans=sum; 
			idx=i-k+1; 
		} 
	} 
	cout<<ans<<endl;;
	for(int i=idx;i<idx+k;i++) cout<<a[i]<<" "; 
	return 0; 
}
