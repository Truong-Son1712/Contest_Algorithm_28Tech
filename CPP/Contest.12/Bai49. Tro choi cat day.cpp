#include<iostream>
#include<iomanip> 

using namespace std;

bool check(int a[],int n,int k,double d) 
{
	long long dem=0;
	for(int i=0;i<n;i++)
		dem+=(int)(a[i]/d);
	return dem>=k; 
}
int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	double l=0,r=9e18,res=-1;

	for(int i=1;i<=100;i++){
		double mid=(l+r)/2; 
		if(check(a,n,k,mid)){
			res=mid;
			l=mid; 
		}else r=mid; 
	} 
	cout<<fixed<<setprecision(6)<<res;
	return 0; 
}
