#include<iostream> 
#include<cstring>
#include<vector>
#include<algorithm> 

using namespace std;

struct edge 
{
	int x,y;	
};
int n,m,sz[100001],parent[100001];
vector<edge> dscanh;
void ktao() 
{
	sz[0]=0; 
	for(int i=1;i<=n;i++){
		sz[i]=1; parent[i]=i; 
	} 
}
int find(int u) 
{
	if(u==parent[u]) return u;
	else return parent[u]=find(parent[u]); 
}
bool Union(int u,int v) 
{
	u=find(u); v=find(v);
	if(u==v) return false;
	if(sz[u]>sz[v]){
		parent[v]=u;
		sz[u]+=sz[v]; 
	}else{
		parent[u]=v;
		sz[v]+=sz[u]; 
	} 
	return true; 
}
void nhap() 
{
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y; cin>>x>>y;
		dscanh.push_back((edge){x,y}); 
	} 
}
void xuly()
{
	int cum=n;
	for(int i=0;i<m;i++) 
	{
		edge a=dscanh[i];
		if(Union(a.x,a.y)){
			cum--;
			cout<<cum<<" "<<*max_element(sz,sz+n+1)<<endl;
		}else{
			cout<<cum<<" "<<*max_element(sz,sz+n+1)<<endl;
		} 
	} 
}
int main() 
{
	nhap();
	ktao();
	//cout<<endl; 
	xuly();
	return 0; 
}
