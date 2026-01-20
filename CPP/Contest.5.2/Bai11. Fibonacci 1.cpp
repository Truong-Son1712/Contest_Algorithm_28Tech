#include<iostream> 

using namespace std;

long long F[100];
void ktao() 
{
	F[2]=1; F[1]=1;
	for(int i=3;i<=92;i++){
		F[i]=F[i-1]+F[i-2];
	} 
}
int main() 
{
	ktao();
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		cout<<F[i]<<endl; 
	}
	return 0; 
}
