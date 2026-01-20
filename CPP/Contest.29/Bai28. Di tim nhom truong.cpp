#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

int n,m; 
vector<int> ke[1001];
vector<vector<int> >v; 
int visited[1001];
int bbr[1001]; 
void nhap() 
{
	cin>>n>>m;
	memset(bbr,0,sizeof(bbr)); 
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x); 
		bbr[x]++;
		bbr[y]++; 
	}
	memset(visited,0,sizeof(visited)); 
}
void dfs(int u,int hs) 
{
	visited[u]=hs;
	for(int v:ke[u]){
		if(visited[v]==0) dfs(v,hs); 
	} 
}
bool cmp(vector<int>a,vector<int>b) 
{
	return a[0]<b[0]; 
}
bool cmp2(int a,int b)
{
	if(bbr[a]!=bbr[b]) return bbr[a]>bbr[b];
	else return a<b;
	//return bbr[a]>bbr[b];
}
int main() 
{ 
	nhap();
	for(int i=1;i<=n;i++){
		if(visited[i]==0) 
		{
			dfs(i,i);
			vector<int> a;
			for(int j=1;j<=n;j++){
				if(visited[j]==i) a.push_back(j); 
			} 
			sort(a.begin(),a.end(),cmp2); 
			v.push_back(a); 
			
		}
	} 
	sort(v.begin(),v.end(),cmp); 
	for(int i=0;i<v.size();i++){
		cout<<v[i][0]<<" "; 
	} 
	return 0; 
}
 
