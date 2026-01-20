#include<iostream>

using namespace std;

int main() 
{
	int n,s; cin>>n>>s;
	int a[n];
	int res=0; 
	for(int &x:a) cin>>x;
	long long sum=0; 
	int l=0,r=0;
	for(int r=0;r<n;r++){
		sum+=a[r];
		while(sum>s){
			sum-=a[l];
			++l; 
		} 
		res+=r-l+1; 
	} 
	cout<<res;
	return 0; 
}
