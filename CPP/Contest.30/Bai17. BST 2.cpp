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
node *insert(node*root,int key) 
{
	if(root==NULL) return new node(key);
	if(key<root->data) root->left=insert(root->left,key);
	else if(key>root->data) root->right=insert(root->right,key);
	return root; 
}
void preorder(node*root) 
{
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right); 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	node*root=new node(a[0]);
	for(int x:a){
		insert(root,x); 
	} 
	preorder(root);
	return 0; 
}
