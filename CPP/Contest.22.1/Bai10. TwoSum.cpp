#include<iostream>
#include<algorithm>
 
using namespace std;

int main() 
{
	bool ok=false; 
	int n,k; cin>>n>>k;
	int a[n];
	for(int &x:a) cin>>x;
	sort(a,a+n);
	long long sum=0;
	int l=0,r=n-1;
	while(l<r){
		sum=a[l]+a[r];
		if(sum==k){
			cout<<"YES";
			ok=true; 
			break; 
		} 
		else if(sum<k) ++l;
		else --r ;
	}
	if(!ok) cout<<"NO";
	return 0; 
}
