#include<iostream>

using namespace std;

int main() 
{
	int n,q; cin>>n>>q;
	int a[n];
	for(int &x:a) cin>>x;
	int D[n]; D[0]=a[0];
	for(int i=1;i<n;i++){
		D[i]=a[i]-a[i-1]; 
	} 
	while(q--){
		int L,R,k; cin>>L>>R>>k;
		D[L]+=k;
		D[R+1]-=k; 
	} 
	long long F[n]; F[0]=D[0];
	for(int i=1;i<n;i++){
		F[i]=F[i-1]+D[i]; 
	} 
	for(int x:F) cout<<x<<" ";
	return 0; 
}
