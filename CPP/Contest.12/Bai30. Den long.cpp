#include<iostream>
#include<algorithm> 
#include<iomanip> 

using namespace std;

int main() 
{
	int n,l; cin>>n>>l;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	double d=0;
	for(int i=1;i<n;i++){
		d=max(d,double(a[i]-a[i-1])/2); 
	} 
	if(a[0]!=0) d=max(d,(double)a[0]);
	if(a[n-1]!=l) d=max(d,(double)l-a[n-1]);
	cout<<fixed<<setprecision(10)<<d;
	return 0; 
}
