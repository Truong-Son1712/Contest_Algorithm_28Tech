#include<iostream>
#include<math.h> 

using namespace std;

int main() 
{
	int n,s; cin>>n>>s;
	int a[n];
	for(int &x:a) cin>>x;
	long long sum=0;
	int ans=0; 
	int l=0,r=0;
	for(r=0;r<n;r++){
		sum+=a[r]; 
		while(sum>=s){
			ans+=n-r;
			sum-=a[l];
			++l; 
		}
	} 
	if(ans==0) cout<<-1;
	else cout<<ans;
	return 0; 
}
