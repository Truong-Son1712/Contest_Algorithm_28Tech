#include<iostream> 

using namespace std;

int d=0; 
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
void duyet(node *root,int h) 
{
	if(root==NULL) return;
	d=max(d,h);
	duyet(root->left,h+1);
	duyet(root->right,h+1); 
}
int main() 
{
	int n; cin>>n;
	node *root=NULL; 
	while(n--) 
	{
		int u,v;char c;
		cin>>u>>v>>c;
		if(root==NULL) root=new node(u);
		insertnode(root,u,v,c); 
	}
	duyet(root,0);
	cout<<d;
	return 0; 
}

