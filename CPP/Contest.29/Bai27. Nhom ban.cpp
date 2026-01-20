#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

int n,m; 
vector<int> ke[1001];
vector<vector<int> >v; 
int visited[1001];
void nhap() 
{
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y; cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x); 
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
    return a.size()>b.size(); 
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
            v.push_back(a); 
        }
    } 
    sort(v.begin(),v.end(),cmp); 
    cout<<v[0].size(); 
    return 0; 
}
 
