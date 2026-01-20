#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	long long b[n];
	b[1]=abs(a[1]-a[0]);
	b[0]=0; 
	for(int i=2;i<n;i++){
		long long x=abs(a[i]-a[i-1])+b[i-1];
		long long y=abs(a[i]-a[i-2])+b[i-2];
		b[i]=min(x,y); 
	} 
	cout<< b[n-1];
	return 0; 
}
