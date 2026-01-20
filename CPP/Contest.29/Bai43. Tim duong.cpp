#include<iostream>
#include<cstring>

using namespace std;

int n,m,s1,s2,t1,t2; 
char F[501][501]; 
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0}; 
bool ok=false; 
void nhap() 
{
	cin>>n>>m; 
	for(int i=1;i<=n;i++) 
	{
		for(int j=1;j<=m;j++){
			cin>>F[i][j];
			if(F[i][j]=='S'){
				s1=i;s2=j; 
			}
			else if(F[i][j]=='T'){
				t1=i;t2=j; 
			} 
		}
	}
}
void ql(int i,int j,int pre_k,int dem) 
{
	if(i==t1&&j==t2){
		ok=true;
		return; 
	} 
	if(dem>3) return;
	if(ok) return; 
	F[i][j]='*';
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&F[i1][j1]!='*'){
			if(k==pre_k) ql(i1,j1,k,dem);
			else ql(i1,j1,k,dem+1); 
		} 
	} 
	F[i][j]='.';
}
int main() 
{
	 nhap(); 
	 ql(s1,s2,-1,0);
	 if(ok) cout<<"YES";
	 else cout<<"NO"; 
	 return 0; 
}
