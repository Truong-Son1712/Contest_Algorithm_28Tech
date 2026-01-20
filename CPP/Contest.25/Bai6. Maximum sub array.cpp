#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	long long b[n+1];
	long long sum=0;
	b[0]=0; 
	for(int i=1;i<=n;i++){
		sum+=a[i-1];
		b[i]=sum; 
	} 
	long long res=0, cur_sum=0; 
	for(int i=1;i<=n;i++){
		cur_sum=0; 
		for(int j=0;j<i;j++){
			cur_sum=b[i]-b[j];
			res=max(res,cur_sum); 
		} 
	} 
	cout<<res;
	return 0; 
}
