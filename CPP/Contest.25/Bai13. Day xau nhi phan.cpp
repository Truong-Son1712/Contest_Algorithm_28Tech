#include<iostream>

using namespace std;

long long F[100];
void ktao() 
{
	F[1]=F[2]=1;
	for(int i=3;i<=92;i++){
		F[i]=F[i-1]+F[i-2]; 
	} 
}
char giatri(int n, long long k) 
{
	if(n==1&&k==1) return '0';
	else if(n==2&&k==1) return '1';
	if(k<=F[n-2]) return giatri(n-2,k);
	else return giatri(n-1,k-F[n-2]);	 
}
int main() 
{
	int n; long long k;
	ktao(); 
	cin>>n>>k;
	cout<<(char)giatri(n,k);
	return 0;
}
