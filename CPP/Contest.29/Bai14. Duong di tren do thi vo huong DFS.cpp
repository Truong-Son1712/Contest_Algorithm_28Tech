#include<iostream>
#include<vector>
#include<cstring> 
#include<algorithm> 

using namespace std;

int n,m,s,t; 
vector<int> ke[1001];
vector<int> duongdi;
bool ok=false; 
bool visited[1001];
int parent[1001]; 
void nhap()
{
	cin>>n>>m>>s>>t; 
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x); 
	} 
	for(int i=1;i<=n;i++) sort(ke[i].begin(),ke[i].end()); 
	memset(visited,false,sizeof(visited)); 
}
void dfs(int u) 
{
	visited[u]=true;
	if(u==t){
		ok=true;
		return; 
	} 
	for(int x:ke[u]){
		if(!visited[x]){
			parent[x]=u;
			dfs(x); 
		} 
	}  
}
int main()
{
	nhap();
	dfs(s); 
	if(ok==false) cout<<-1;
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
