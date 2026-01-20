#include<iostream>
#include<vector>
#include<cstring> 
#include<algorithm> 
#include<queue> 

using namespace std;

int n,m; 
vector<int> ke[1001];
//vector<int> duongdi; 
bool visited[1001];
//int parent[1001]; 
int lt[1001]; 
void nhap()
{
	cin>>n>>m; 
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x); 
	} 
	for(int i=1;i<=n;i++) sort(ke[i].begin(),ke[i].end()); 
	memset(visited,false,sizeof(visited)); 
}
bool bfs(int u,int tplt)
{
	queue<int> q; q.push(u);
	visited[u]=true;
	while(!q.empty())
	{
		int v=q.front(); q.pop();
		lt[v]=tplt; 
		for(int x:ke[v]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
			}
		} 
	} 
	return false; 
}
int main()
{
	nhap();
	int tplt=1; 
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			bfs(i,tplt);
			tplt++; 
		}
	} 
	int Q; cin>>Q; 
	while(Q--){
		int a,b; cin>>a>>b;
		if(lt[a]==lt[b]) cout<<1<<endl;
		else cout<<-1<<endl; 
	} 
	return 0; 
}  
