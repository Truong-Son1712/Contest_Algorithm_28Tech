#include<iostream>

using namespace std;

int main() 
{
	int n,q; cin>>n>>q;
	int a[n];
	for(int &x:a) cin>>x;
	int F[n]; F[0]=a[0];
	for(int i=1;i<n;i++){
		F[i]=F[i-1]+a[i]; 
	} 
	while(q--){
		int L,R; cin>>L>>R;
		if(L==0) cout<<F[R]<<endl; 
		else cout<<F[R]-F[L-1]<<endl; 
	} 
	return 0; 
}
