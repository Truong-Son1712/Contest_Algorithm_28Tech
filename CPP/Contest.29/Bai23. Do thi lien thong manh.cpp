#include<iostream> 
#include<stack>
#include<cstring>
#include<vector>

using namespace std;

int n,m;
vector<int> ke[1001];
vector<int> t_ke[1001];
bool visited[1001];
stack<int>st; 
void nhap() 
{
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		t_ke[y].push_back(x); 
	} 
	memset(visited,false,sizeof(visited)); 
}
void dfs1(int u) 
{
	visited [u]=true; 
	for(int v:ke[u]){
		if(!visited[v]) dfs1(v); 
	} 
	st.push(u); 
}
void dfs2(int u)
{
	//cout<<endl; 
	//cout<<u<<" "; 
	visited[u]=true;
	for(int v:t_ke[u]){
		if(!visited[v]) dfs2(v); 
	} 
}
bool kosaraju() 
{
	for(int i=1;i<=n;i++){
		if(!visited[i]) dfs1(i); 
	} 
	memset(visited,false,sizeof(visited));
	int cc=0;
	while(!st.empty()){
		int top=st.top() ;st.pop();
		if(!visited[top]){
			//cout<<"hello"; 
			++cc;
			dfs2(top);
			//cout<<endl; 
		} 
	}
	//cout<<endl<<cc; 
	if(cc==1) return true;
	else return false; 
}
int main() 
{
	nhap();
	if(kosaraju()) cout<<1;
	else cout<<0; 
	return 0; 
}
