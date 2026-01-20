#include<iostream>
#include<algorithm> 

using namespace std;

int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int l=0, r=0, res=0;
	while(r<n){
		if(a[r]-a[l]>k){
			while(a[r]-a[l]>k){
				++l; 
				}
		} 
		res=max(res,r-l+1);
		++r; 
	} 
	cout<<res;
	return 0; 
}
