#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
 
using namespace std;

int n,m; 
bool visited[1001];
vector<int> ke[1001];  
void nhap(){
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
	for(int v:ke[u]){
		if(!visited[v]) dfs(v); 
	} 
}
int tplt()
{
	int dem=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dem++;
			dfs(i); 
		}
	}
	return dem; 
}
int dinhtru() 
{
	int dem=0;
	for(int i=1;i<=n;i++){
		memset(visited,false,sizeof(visited)); 
		visited[i]=true;
		if(tplt()>1){
			//cout<<i<<" ";
			dem++; 
		} 
	} 
	return dem; 
}
int main() 
{
	nhap();
	cout<<dinhtru();
	return 0; 
}
