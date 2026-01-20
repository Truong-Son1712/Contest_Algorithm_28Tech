#include<iostream>

using namespace std;

int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int &x:a) cin>>x;
	int len=1e9, idx=0;
	long long sum=a[0]; 
	int l,r=0;
	for(l=0;l<n;l++){
		while(sum<k&&r<n){
			 r++;
			 sum+=a[r]; 
		} 
		if(sum>=k){
			if(r-l+1<len){
				len=r-l+1;
				idx=l; 
			} 
		}
		sum-=a[l]; 
	} 
	for(int i=idx;i<idx+len;i++) cout<<a[i]<<" ";
	return 0; 
}
