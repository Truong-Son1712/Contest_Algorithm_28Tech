#include<iostream>
#include<math.h>
#include<cstring>

using namespace std;

const int m=1e9+1;
bool nt[m];
void sang() 
{
	memset(nt,true,sizeof(nt));
	nt[1]=nt[0]=false; 
	for(int i=2;i<=sqrt(m);i++){
		if(nt[i]){
			for(int j=i*i;j<=m;j+=i) nt[j]=false; 
		} 
	}  
}
bool check(int n) 
{
	while(n>0){
		if(nt[n]==false) return false;
		n/=10; 
	} 
	return true; 
}
int main()
{
	sang(); 
	int T; cin>>T;
	while(T--) 
	{
		int n; cin>>n;
		for(int i=1;i<=n;i++){
			if(nt[i]&&check(i)) cout<<i<<" "; 
		} 
	}
	return 0; 
}
