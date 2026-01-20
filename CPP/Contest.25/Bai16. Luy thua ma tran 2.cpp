#include<iostream>

using namespace std;

int n,k; 
const int mod=1e9+7; 
struct matran
{
	long long f[10][10];
	friend matran operator *(matran a, matran b)
	{
		matran c;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				c.f[i][j]=0;
				for(int k=0;k<2;k++){
					c.f[i][j]+=(a.f[i][k]%mod*b.f[k][j]%mod)%mod;
					c.f[i][j]%=mod; 
				}
			} 
		}	
		return c; 
	} 
};
matran powmod(matran a,long long n)
{
	if(n==1) return a;
	matran x=powmod(a,n/2);
	if(n%2==0)return x*x;
	else return a*x*x; 
}
int main() 
{
	cin>>n>>k; 
	matran a;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a.f[i][j]; 
		} 
	} 
	matran res=powmod(a,k);
	long long sum=0; 
	for(int j=0;j<n;j++){
		sum+=res.f[j][n-1];
		sum%=mod; 
	} 
	cout<<sum; 
	return 0; 
}
