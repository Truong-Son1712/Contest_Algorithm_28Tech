#include<iostream> 

using namespace std;

int n,s,a[100],x[100],dem=1e9,ok=0; 
void Try(int i, int sum) 
{
	for(int j=x[i-1]+1;j<=n;j++) 
	{
		if(sum+a[j]<=s){
			x[i]=j;
			if(sum+a[j]==s){
				ok=1; 
				dem=min(dem,i); 
			} 
			else Try(i+1,sum+a[j]); 
		} 
		
	}
}
int main() 
{
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>a[i];
	x[0]=0;
	Try(1,0);
	if(ok==0)cout<<-1;
	else cout<<dem;
	return 0; 
}
