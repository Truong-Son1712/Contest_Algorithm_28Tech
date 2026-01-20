#include<iostream>
#include<math.h>
#include<cstring>
 
using namespace std;

const int n=1e7+1; 
bool a[n];

void sang() 
{
	memset(a,1,sizeof(a)); 
	a[0]=a[1]=0;
	for(int i=2;i<=sqrt(n);i++){
		if(a[i]==1){
			for(int j=i*i;j<=n;j+=i) a[j]=false; 
		}
	} 
}
int main() 
{
	int m; cin>>m;
	sang(); 
	for(int i=0;i<=m;i++){
		if(a[i]==1) cout<<i<<" "; 
	} 
	return 0; 
}
