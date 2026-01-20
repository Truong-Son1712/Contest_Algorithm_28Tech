#include<iostream>
#include<vector>
#include<cstring> 

using namespace std;

int n,m; 
vector<int> ke[1001];
bool visited[1001];
void nhap()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x); 
	} 
	memset(visited,false,sizeof(visited)); 
}
void dfs(int u) 
{
	visited[u]=true; 
	for(int x:ke[u]){
		if(!visited[x]) dfs(x); 
	} 
}
int main()
{
	nhap();
	int dem=0;
	for(int i=1;i<=n;i++){
		if(visited[i]==false){
			dfs(i); dem++; 
		} 
	}	
	cout<<dem;
	return 0; 
} 
