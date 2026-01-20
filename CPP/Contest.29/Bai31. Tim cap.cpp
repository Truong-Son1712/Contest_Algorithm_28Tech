#include<iostream>
#include<cstring>
#include<vector>
#include<queue> 

using namespace std;

int n; 
vector<int> ke[1001];
bool visited[1001]; 
struct node 
{
	int x,tt; 
};
vector<int>v; 
void nhap() 
{
	cin>>n; 
	int m=n-1; 
	memset(visited,false,sizeof(visited));
	//memset(bbr,0,sizeof(bbr));
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	} 
}
void bfs() 
{
	queue<node> q;
	q.push((node){1,0});
	visited[1]=true;
	while(!q.empty()) 
	{
		node a=q.front();q.pop();
		v.push_back(a.tt);
		visited[a.x]=true;
		for(int u:ke[a.x]){
			if(!visited[u]){
				node b={u,a.tt+1};
				visited[u]=true;
				q.push(b); 
			} 
		} 
	}
}
int main() 
{
	nhap();
	bfs(); 
	int dem=0;
	for(int x:v){
		dem+=x+1; 
	} 
	cout<<dem;
	return 0; 
}
