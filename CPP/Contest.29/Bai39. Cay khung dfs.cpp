#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> ke[1001];
bool visited[1001];
int n,m,s;
void nhap() 
{
	cin>>n>>m>>s;
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);  
	} 
	for(int i=1;i<=n;i++){
		sort(ke[i].begin(),ke[i].end()); 
	} 
}
void dfs(int u) 
{
	visited[u]=true;
	for(int v:ke[u]){
		if(!visited[v]){
			cout<<u<<"->"<<v<<endl;
			dfs(v); 
		}
	}
}
int main() 
{
	nhap();
	dfs(s);
	return 0; 
}
