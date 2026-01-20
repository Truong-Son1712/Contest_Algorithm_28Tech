#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<queue>
 
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
void bfs(int u) 
{
	queue<int>q;
	visited[u]=true;
	q.push(u);
	while(!q.empty()) 
	{
		int v=q.front(); q.pop();
		for(int x:ke[v]){
			if(!visited[x]){
				cout<<v<<"->"<<x<<endl; 
				q.push(x);
				visited[x]=true; 
			} 
		} 
	}
}
int main() 
{
	nhap();
	bfs(s);
	return 0; 
}
