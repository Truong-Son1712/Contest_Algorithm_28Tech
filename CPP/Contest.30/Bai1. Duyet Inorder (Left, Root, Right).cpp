#include<iostream>

using namespace std;

struct node 
{
	int data;
	node *left;
	node *right;;
	node (int x){
		data=x;
		left=right=NULL; 
	}
};
node* makenode(int x) 
{
	node *newNode= new node(x);
	newNode->data=x;
	newNode->left=newNode->right=NULL;
	return newNode; 
}
void makeroot(node *root,int u,int v,char c) 
{
	if(c=='L') root->left=new node(v);
	else root->right= new node(v); 
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
void inorder(node *root) 
{
	if(root!=NULL) 
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right); 
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
		}else{
			insertnode(root,u,v,c); 
		} 
	}
	inorder(root);
	return 0; 
}
