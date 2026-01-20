#include<iostream>
#include<set>

using namespace std;

int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
char a[100][100];
int n,m;
void loang(int i,int j, int &dt) 
{
	a[i][j]='.';
	dt++; 
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=0&&i1<n&&j1>=0&&j1<m&&a[i1][j1]=='*')
			loang(i1,j1,dt); 
	} 
}
int main() 
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j]; 
	multiset<int> se;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			if(a[i][j]=='*'){
				int dt=0;
				loang(i,j,dt);
				se.insert(dt); 
			}
	} 
	for(auto x:se) cout<<x<<" ";
	cout<<endl; 
	return 0; 
}
