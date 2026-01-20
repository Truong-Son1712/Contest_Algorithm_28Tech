#include<iostream>
#include<math.h>
#include<cstring>

using namespace std;

const int p=1e9+7; 
bool nt[1000001];
void ktao() 
{
	memset(nt,true,sizeof(nt));
	nt[0]=nt[1]=false;
	for(int i=2;i<=sqrt(1000000);i++){
		if(nt[i]){
			for(int j=i*i;j<=1000000;j+=i) nt[j]=false; 
		} 
	} 
}
long long res[10000001];
void ktao2() 
{
	long long tich =1; 
	for(int i=0;i<=1000000;i++){
		if(nt[i]){
			tich*=i;
			tich%=p; 
		}
		res[i]=tich; 
	} 
}
int main() 
{
	ktao();
	ktao2();
	int T; cin>>T;
	while(T--) 
	{
		int x; cin>>x;
		cout<<res[x]<<endl; 
	}
	return 0; 
}
 
