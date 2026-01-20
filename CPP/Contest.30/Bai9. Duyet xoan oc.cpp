#include<iostream>
#include<stack>

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
void spiral(node* root) 
{
	stack<node*>s1,s2;
	s1.push(root);
	while(!s1.empty()||!s2.empty()) 
	{
		while(!s1.empty()) 
		{
			node*top=s1.top();s1.pop();
			cout<<top->data<<" ";
			if(top->right!=NULL) s2.push(top->right);
			if(top->left!=NULL) s2.push(top->left); 
		}
		while(!s2.empty()) 
		{
			node*top=s2.top();s2.pop();
			cout<<top->data<<" ";
			if(top->left!=NULL) s1.push(top->left);
			if(top->right!=NULL) s1.push(top->right); 
		}
	}
}
int main() 
{
	int n; cin>>n;
	node * root=NULL;
	while(n--) 
	{
		int u,v; char c;
		cin>>u>>v>>c; 
		if(root==NULL) root=new node(u);
		insertnode(root,u,v,c); 
	}
	spiral(root);
	return 0; 
}
