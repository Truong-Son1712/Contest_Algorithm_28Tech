#include<iostream>
#include<vector>
#include<cstring>
 
using namespace std; 

int n,m,dem=0; 
int visited[100001]; 
int sodinh[100001]; 
int bbr[100001]; 
vector<int> ke[100001]; 
void nhap() 
{
	cin>>n>>m;
	memset(bbr,0,sizeof(bbr)); 
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x); 
		bbr[x]++;bbr[y]++; 
	} 
	memset(visited,0,sizeof(visited)); 
}
void dfs(int u,int nhom,vector<int> &v) 
{
	visited[u]=nhom;
	v.push_back(u); 
	for(int h:ke[u]){
		if(visited[h]==0) dfs(h,nhom,v); 
	} 
}
void xuly() 
{
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			vector<int> v; 
			dfs(i,i,v);
			for(int x:v){
				sodinh[x]=v.size();
			} 
		} 
	} 
}
bool check()
{
	for(int i=1;i<=n;i++){
		if(bbr[i]!=sodinh[i]-1) return false; 
	} 
	return true; 
}
int main() 
{
	nhap();
	xuly();
 	if(check()) cout<<"YES";
	else cout<<"NO";
	/*cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<bbr[i]<<" "<<sodinh[i]<<endl; 
	} */
	return 0; 
}
