#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<algorithm >
using namespace std;

struct node 
{
	int data;
	node*left;
	node*right;
	node(int x) 
	{
		data=x;
		left=right=NULL;
	}
};
void makeroot(node*root,int u,int v,char c) 
{
	if(c=='L') root->left=new node(v);
	else root->right=new node(v); 
}
void insertnode(node*root,int u,int v,char c) 
{
	if(root==NULL) return;
	if(root->data==u) makeroot(root,u,v,c);
	else{
		insertnode(root->left,u,v,c);
		insertnode(root->right,u,v,c); 
	} 
}
vector<pair<int,int>>v; 
void bfs(node*root) 
{
	queue<pair<node*,int>> q;
	q.push({root,0});
	while(!q.empty()){
		node*toproot=q.front().first;
		int toph=q.front().second; q.pop(); 
		v.push_back({toproot->data,toph});
		if(toproot->left!=NULL) q.push({toproot->left,toph+1}); 
		if(toproot->right!=NULL) q.push({toproot->right,toph+1});
	} 
}
int main() 
{
	int n; cin>>n;
	node*root=NULL;
	while(n--) 
	{
		int u,v; char c;
		cin>>u>>v>>c;
		if(root==NULL) root=new node(u); 
		insertnode(root,u,v,c) ;
	}
	bfs(root);
	sort(v.begin(),v.end());
	for(auto x:v) cout<<x.second<<" ";
	return 0; 
}

