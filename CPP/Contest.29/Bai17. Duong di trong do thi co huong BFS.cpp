#include<iostream>
#include<vector>
#include<cstring> 
#include<algorithm> 
#include<queue> 

using namespace std;

int n,m,s,t; 
vector<int> ke[1001];
vector<int> duongdi; 
bool visited[1001];
int parent[1001]; 
void nhap()
{
	cin>>n>>m>>s>>t; 
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		//ke[y].push_back(x); 
	} 
	for(int i=1;i<=n;i++) sort(ke[i].begin(),ke[i].end()); 
	memset(visited,false,sizeof(visited)); 
}
bool bfs(int u)
{
	queue<int> q; q.push(u);
	visited[u]=true;
	while(!q.empty())
	{
		int v=q.front(); q.pop();
		if(v==t){
			return true; 
		} 
		for(int x:ke[v]){
			if(!visited[x]){
				q.push(x);
				parent[x]=v; 
				visited[x]=true;
			}
		} 
	} 
	return false; 
}
int main()
{
	nhap();
	if(bfs(s)==false) cout<<-1;
	else{
		while(t!=s){
			duongdi.push_back(t); 
			t=parent[t]; 
		} 
		duongdi.push_back(s);
		reverse(duongdi.begin(),duongdi.end());
		for(int x:duongdi) cout<<x<<" "; 
	} 
	return 0; 
}  
