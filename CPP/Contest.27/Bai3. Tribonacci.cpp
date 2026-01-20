#include<iostream>

using namespace std;

const int p=1e9+7;
const int n=1e6+1;
long long F[n];
void ktao() 
{
	F[0]=0;F[1]=0;F[2]=1; 
	for(int i=3;i<n;i++){
		F[i]=F[i-1]+F[i-2]+F[i-3];
		F[i]%=p; 
	} 
}
int main() 
{
	ktao(); 
	int T; cin>>T;
	while(T--){
		int x; cin>>x;
		cout<<F[x]<<endl; 
	} 
	return 0; 
}
