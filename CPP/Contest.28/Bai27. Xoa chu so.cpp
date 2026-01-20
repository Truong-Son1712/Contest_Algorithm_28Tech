#include<iostream> 
#include<cstring> 

using namespace std;

int F[1000001];
int tinh(int n) 
{
	if(n==0) return 0;
	if(F[n]!=0) return F[n];
	int m=n;
	int res=1e9;
	while(m>0) 
	{
		int r=m%10;
		if(r!=0) res=min(res,tinh(n-r)+1); 
		m/=10; 
	}
	F[n]=res;
	return res; 
}
int main() 
{
	memset(F,0,sizeof(F)); 
	int n; cin>>n;
	cout<<tinh(n);
	return 0; 
}
