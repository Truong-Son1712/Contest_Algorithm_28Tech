#include<iostream>
#include<vector> 
#include<cstring> 
#include<algorithm>
#include<queue> 
 
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
		//ke[y].push_back(x); 
	}
	for(int i=1;i<=n;i++){
		sort(ke[i].begin(),ke[i].end()); 
	}
	memset(visited,false,sizeof(visited)); 
}

void bfs(int s) 
{
	queue<int> q;
	q.push(s);
	visited[s]=true;
	while(!q.empty()){
		int v=q.front(); q.pop();
		cout<<v<<" ";
		for(int x:ke[v]){
			if(!visited[x]){
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
