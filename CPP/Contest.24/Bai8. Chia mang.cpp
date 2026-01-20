#include<bits/stdc++.h>

using namespace std;

int n,k,s,ok=0,a[100];
bool used[100];
void ql(int i,int batdau,int cnt,int sum) 
{
	if(ok) return;
	if(cnt==k){
		ok=1; return; 
	} 
	for(int j= batdau;j<=n;j++){
		if(sum+a[j]<=s&&!used[j]) {
			used[j]=true; 
			if(sum+a[j]==s){
				ql(i+1,1,cnt+1,0) ;
			} 
			else ql(i+1,j+1,cnt,sum+a[j]) ;
			used[j]=false; 
		}
	} 
}
int main() 
{
	s=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s+=a[i]; 
	} 
	if(s%k!=0) cout<<ok;
	else{
		memset(used,false,sizeof(used)) ;
		s/=k;
		ql(1,1,0,0); 
		cout<<ok; 
	}
	return 0; 
}
