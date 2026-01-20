#include<iostream>

using namespace std;

bool check(int x,int y,int n,int t) 
{
	long long dem=1;
	t-=min(x,y);
	dem+=t/x+t/y;
	return dem>=n; 
}
int main() 
{
	int n,x,y; cin>>n>>x>>y;
	int l=1,r=min(x,y)*n,res=0;
	while(l<=r){
		int mid=(l+r)/2;
		if(check(x,y,n,mid)){
			res=mid;
			r=mid-1; 
		} else l=mid+1; 
	} 
	cout<<res;
	return 0; 
}
