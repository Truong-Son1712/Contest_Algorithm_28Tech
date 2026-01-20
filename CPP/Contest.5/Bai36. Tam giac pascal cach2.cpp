#include<iostream>
#include<math.h>

using namespace std;

long long tohop(int n,int k) 
{
	long long res=1; k=min(k,n-k);
	for(int i=1;i<=k;i++){
		res*=(n-i+1);
		res/=i;
		res%=(long long)1e9+7; 
	} 
	return res; 
}
int main() 
{
	int n; cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<tohop(i,j)<<" ";
		} 
		cout<<endl; 
	} 
	return 0; 
}
