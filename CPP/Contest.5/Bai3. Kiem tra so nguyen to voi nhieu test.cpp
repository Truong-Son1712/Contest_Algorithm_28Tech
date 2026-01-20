#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;

const int n=1e6+1;
bool nt[n];

void sang()
{
	memset(nt,true,sizeof(nt));
	nt[0]=nt[1]=false; 
	for(int i=2;i<=sqrt(n);i++){
		if(nt[i]==true){
			for(int j=i*i;j<=n;j+=i) nt[j]=false; 
		}
	} 
}
int main() 
{
	int T; cin>>T;
	sang();
	while(T--){
		int m; cin>>m;
		if(nt[m]==true) cout<<"YES"<<endl;
		else cout<<"NO"<<endl; 
	} 
	return 0; 
}
