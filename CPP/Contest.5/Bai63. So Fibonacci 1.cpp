#include<iostream>
#include<math.h>

using namespace std;

const int n=1e6+1;
const int p=1e9+7; 
int F[n];

void ktao() 
{
	F[0]=0; F[1]=1;
	for(int i=2;i<n;i++){
		F[i]=(F[i-1]%p+F[i-2]%p)%p; 
	} 
}
int main() 
{
	int n; cin>>n;
	ktao(); 
	cout<<F[n-1];
	return 0; 
}
