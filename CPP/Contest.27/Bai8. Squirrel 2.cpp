#include<iostream>
#include<math.h>
#include<set> 

using namespace std;

int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int &x:a) cin>>x;
	long long b[n];
	b[0]=0; 
	for(int i=1;i<n;i++){
		set<long long> se;
		for(int j=1;j<=k;j++){
			if(i-j<0) break;
			long long x=abs(a[i]-a[i-j])+b[i-j];
			se.insert(x); 
		}
		//long long x=abs(a[i]-a[i-1])+b[i-1];
		//long long y=abs(a[i]-a[i-2])+b[i-2];
		//b[i]=min(x,y);
		auto it=se.begin();
		b[i]=*it; 
	} 
	cout<< b[n-1];
	return 0; 
}
