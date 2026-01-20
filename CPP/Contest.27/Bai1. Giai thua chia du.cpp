#include<iostream>

using namespace std;

long long a[1000001];
const int p=1e9+7;
int main() 
{
	int T; cin>>T;
	a[0]=1;
	long long res=1;
	for(int i=1;i<=1000000;i++) 
	{
		res*=i;
		res%=p;
		a[i]=res; 
	}
	while(T--) 
	{
		int n; cin>>n;
		cout<<a[n]<<endl; 
	}
	return 0; 
}
