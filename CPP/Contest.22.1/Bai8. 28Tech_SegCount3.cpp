#include<iostream>

using namespace std;

int dem[1000001]; 
int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int &x:a) cin>>x; 
	int cnt=0;
	long long ans=0;
	int l=0,r;
	for(r=0;r<n;r++){
		dem[a[r]]++;
		if(dem[a[r]]==1) ++cnt;
		while(cnt>k){
			if(dem[a[l]]==1)--cnt; 
			dem[a[l]]--;
			++l; 
		} 
		ans+=r-l+1; 
	} 
	cout<<ans;
	return 0; 
}
