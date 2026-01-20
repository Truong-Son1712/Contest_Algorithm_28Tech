#include<iostream>
#include<algorithm> 

using namespace std;

int main() 
{
	int n,q; cin>>n>>q;
	int a[n];
	for(int &x:a) cin>>x;
	int d[n+5]={0};
	while(q--){
		int L,R; cin>>L>>R;
		--R;--L; 
		d[L]+=1;
		d[R+1]-=1; 
	} 
	int F[n]; F[0]=d[0];
	for(int i=1;i<n;i++){
		F[i]=F[i-1]+d[i]; 
	}  
	sort(F,F+n,greater<int>());
	sort(a,a+n,greater<int>()); 
	long long res=0;
	for(int i=0;i<n;i++){
		res+=(long long)a[i]*F[i]; 
	} 
	cout<<res;
	return 0; 
}
