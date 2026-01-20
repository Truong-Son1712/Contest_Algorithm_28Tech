#include<iostream>

using namespace std;

struct node 
{
	int data;
	node *left;
	node *right;
	node(int x){
		data=x;
		left=right=NULL; 
	}
};
void makeroot(node *root,int u,int v,char c) 
{
	if(c=='L') root->left =new node(v);
	else root->right=new node(v); 
}
void insertnode(node *root,int u,int v,char c) 
{
	if(root==NULL) return;
	if(root->data==u) makeroot(root,u,v,c);
	else{
		insertnode(root->left,u,v,c);
		insertnode(root->right,u,v,c); 
	} 
}
void preorder(node *root) 
{
	if(root!=NULL){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right); 
	}
}
int main() 
{
	int n; cin>>n;
	node *root=NULL; 
	while(n--) 
	{
		int u,v; char c;
		cin>>u>>v>>c; 
		if(root==NULL){
			root=new node(u); 
			makeroot(root,u,v,c);
		}
		else insertnode(root,u,v,c);
	}
	preorder(root);
	return 0; 
}
