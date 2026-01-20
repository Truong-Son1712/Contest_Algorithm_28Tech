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
node* insert(node*root,int key) 
{
	if(root==NULL) return new node(key);
	if(key<root->data) root->left=insert(root->left,key);
	else if(key>root->data) root->right=insert(root->right,key);
	return root;  
}
void postorder(node*root)
{
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" "; 
	}
}
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	node*root=new node(a[0]);
	for(int x:a) 
	{
		insert(root,x); 
	}
	postorder(root);
	return 0; 
}
