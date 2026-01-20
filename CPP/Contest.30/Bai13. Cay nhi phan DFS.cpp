#include<iostream>

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
void duyet(node*root) 
{
	if(root==NULL) return;
	cout<<root->data<<" ";
	duyet(root->right);
	duyet(root->left); 
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
		insertnode(root,u,v,c); 
	}
	duyet(root);
	return 0; 
}
