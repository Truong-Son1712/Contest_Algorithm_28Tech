#include<iostream>
#include<vector> 
#include<cstring> 
#include<algorithm>
 
using namespace std;

vector<int> ke[1001];
int n,m,s;
bool visited[1001]; 
void nhap() 
{
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x); 
	}
	for(int i=1;i<=n;i++){
		sort(ke[i].begin(),ke[i].end()); 
	}
	memset(visited,false,sizeof(visited)); 
}

void dfs(int s)
{
	visited[s]=true;
	cout<<s<<" ";
	for(int v:ke[s]){
		if(!visited[v]) dfs(v); 
	} 
}
int main() 
{
	nhap();
	dfs(s);
	return 0; 
}
