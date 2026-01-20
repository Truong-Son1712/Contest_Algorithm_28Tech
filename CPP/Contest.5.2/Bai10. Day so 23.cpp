#include<iostream>

using namespace std;

const int p=1e9+7;
const int n=1e6+1; 
long long F[n]; 
void ktao() 
{
	F[1]=1;F[2]=1;
	for(int i=3;i<n;i++) 
	{
		F[i]=2*F[i-1]+3*F[i-2];
		F[i]%=p; 
	}
}
int main() 
{
	ktao() ;
	int m; cin>>m;
	cout<<F[m];
	return 0; 
}
