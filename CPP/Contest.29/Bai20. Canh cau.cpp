#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
 
using namespace std;

int n,m; 
bool visited[1001];
vector<int> ke[1001];
vector<pair<int,int> >dscanh;  
void nhap(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		dscanh.push_back({x,y}); 
		ke[x].push_back(y);
		ke[y].push_back(x); 
	} 
	memset(visited,false,sizeof(visited)); 
}
void dfs(int u,int s,int t) 
{
	visited[u]=true;
	for(int v:ke[u]){
		if((u==s&&v==t)||(u==t&&v==s)) continue; 
		if(!visited[v]) dfs(v,s,t); 
	} 
}
int tplt(int s,int t)
{
	int dem=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dem++;
			dfs(i,s,t); 
		}
	}
	return dem; 
}
int canhcau() 
{
	int dem=0; 
	int cc=tplt(0,0);
	for(auto i: dscanh){
		memset(visited,false,sizeof(visited)); 
		if(cc<tplt(i.first,i.second)){
			//cout<<i<<" ";
			dem++; 
		} 
	} 
	return dem; 
}
int main() 
{
	nhap();
	cout<<canhcau();
	return 0; 
}
