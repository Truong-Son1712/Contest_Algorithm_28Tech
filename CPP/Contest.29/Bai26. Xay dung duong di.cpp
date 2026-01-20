#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

int n,m; 
vector<int> ke[1001];
vector<vector<int> >v; 
int visited[1001];
void nhap() 
{
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x); 
	}
	memset(visited,0,sizeof(visited)); 
}
void dfs(int u,int hs) 
{
	visited[u]=hs;
	for(int v:ke[u]){
		if(visited[v]==0) dfs(v,hs); 
	} 
}
int demtplt() 
{
	int dem=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i,1);
			dem++; 
		} 
	} 
	memset(visited,0,sizeof(visited));
	return dem; 
}
bool cmp(vector<int>a,vector<int>b) 
{
	return a[0]<b[0]; 
}
int main() 
{ 
	nhap();
	int lt=demtplt();
	for(int i=1;i<=n;i++){
		if(visited[i]==0) 
		{
			dfs(i,i);
			vector<int> a;
			for(int j=1;j<=n;j++){
				if(visited[j]==i) a.push_back(j); 
			} 
			sort(a.begin(),a.end()); 
			v.push_back(a); 
		}
	} 
	cout<<lt-1<<endl;
	for(int i=1;i<v.size();i++){
		cout<<v[i-1][0]<<" "<<v[i][0]<<endl; 
	} 
	return 0; 
}
 
