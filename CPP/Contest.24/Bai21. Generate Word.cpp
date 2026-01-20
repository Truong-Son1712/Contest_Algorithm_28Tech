#include<iostream>
#include<string>

using namespace std;

int n,m,used[101][101], check=0;
string s;
char a[101][101];
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};

void nhap() 
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>a[i][j]; 
	}
	cin>>s; 
}
void Try(int i,int j,int pos) {
	if(pos==s.size()){
		check=1;
		return; 
	} 
	for(int k=0;k<4;k++){
		int x=i+dx[k];
		int y=j+dy[k];
		if(x>=1&&x<=n&&y>=1&&y<=n&&used[x][y]==0&&a[x][y]==s[pos]){
			used[x][y]=1;
			Try(x,y,pos+1);
			used[x][y]=0; 
		} 
	} 
}
int main() 
{
	nhap();
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			if(a[i][j]=s[0]){
				used[i][j]=1;
				Try(i,j,1);
				used[i][j]=0; 
			} 
	} 
	if(check) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
