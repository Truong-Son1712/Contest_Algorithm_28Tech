#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector> 
#include<queue> 

using namespace std;
int n,m;
int in[1001];
vector<int> ke[1001]; 
void nhap()
{
	cin>>n>>m;
	memset(in,0,sizeof(in)); 
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		in[y]++; 
	} 
}
bool kahn() 
{ 
	int dem=0; 
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(in[i]==0) q.push(i); 
	} 
	while(!q.empty()){
		int u=q.front(); q.pop();
		dem++;
		for(int v:ke[u]){
			in[v]--;
			if(in[v]==0) q.push(v); 
		} 
	} 
	return dem!=n;
}
int main() 
{
	nhap();
	if(kahn()) cout<<1;
	else cout<<0;
	return 0; 
}
