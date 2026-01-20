#include<iostream>
#include<cstring>
#include<math.h> 

using namespace std;

const int n=1e6; 
bool nt[n];
void sang() 
{
	memset(nt,true,sizeof(nt));
	nt[0]=nt[1]=false;
	for(int i=2;i<=sqrt(n);i++){
		if(nt[i]){
			for(int j=i*i;j<=n;j+=i) nt[j]=false; 
		} 
	} 
}
int main() 
{
	sang(); 
	int T; cin>>T;
	//for(int i=0;i<=100;i++) if(nt[i]) cout<<i<<" ";
	//cout<<endl; 
	while(T--) 
	{
		int m; cin>>m;
		int l=2,r=m-2;
		while(l<=r){
			//cout<<l<<" "<<r<<endl; 
			if(nt[l]==false) l++;
			else if(nt[r]==false) r--; 
			else if(nt[l]&&nt[r]&&l+r==m){
				cout<<l<<" "<<r<<endl;
				l++; r--; 
			}
			else if(nt[l]&&nt[r]&&l+r<m) l++;
			else if(nt[l]&&nt[r]&&l+r>m) r--; 
		}
	}
	return 0; 
}
 
