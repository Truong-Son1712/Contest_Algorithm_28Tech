#include<algorithm>
#include<iostream>
#include<vector> 

using namespace std;


struct edge 
{
	int cha,con;
	char phia; 
	edge(int u,int v,char c) 
	{
		cha=u;
		con=v;
		phia=c; 
	}
};
bool operator < (const edge &a, const edge &b) {
    if(a.cha==b.cha){
    	if(a.con==b.con){
    		return a.phia<b.phia; 
		}else{
			return a.con<b.con; 
		} 
	}else{
		return a.cha<b.cha; 
	} 
}
int main() 
{
	int n; cin>>n; 
	vector<edge> a,b;
	for(int i=0;i<n;i++) 
	{
		int u,v; char c; 
		cin>>u>>v>>c; 
		edge tmp(u,v,c);
		a.push_back(tmp); 
	}
	int m; cin>>m; 
	for(int i=0;i<m;i++) 
	{
		int u,v; char c;
		cin>>u>>v>>c; 
		edge tmp(u,v,c);
		b.push_back(tmp); 
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	bool ok=true;
	if(a.size()!=b.size()) {
		cout<<"NO";
		return 0; 
	}
	for(int i=0;i<n;i++){
		if(a[i].cha!=b[i].cha||a[i].con!=b[i].con||a[i].phia!=b[i].phia){
			ok=false;
			break; 
		} 
	} 
	if(ok) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
