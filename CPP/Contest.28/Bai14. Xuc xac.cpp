#include<iostream>

using namespace std;

long long F[1000001]; 
int main() 
{
	int n; cin>>n;
	int mod=1e9+7;
	F[0]=1; 
	for(int i=1;i<=n;i++) 
	{
		F[i]=0; 
		for(int j=1;j<=6;j++) 
		{
			if(i>=j){
				F[i]+=F[i-j];
				F[i]%=mod; 
			}
		}
	}
	cout<<F[n];
	return 0; 
}
