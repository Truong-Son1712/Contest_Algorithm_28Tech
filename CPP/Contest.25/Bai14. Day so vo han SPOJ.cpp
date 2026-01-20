#include<iostream>

using namespace std;

const int mod=1e9+7; 
struct matran
{
	long long f[2][2];
	friend matran operator *(matran a, matran b)
	{
		matran c;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
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
	long long n; cin>>n;
	matran a;
	a.f[0][0]=a.f[1][0]=a.f[0][1]=1;
	a.f[1][1] =0;
	matran res=powmod(a,n);
	cout<<res.f[1][0];
	return 0; 
}
