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
node* minnode(node*root) 
{
	node*tmp=root;
	while(tmp!=NULL&&tmp->left!=NULL){
		tmp=tmp->left; 
	} 
	return tmp; 
}
node*deletenode(node*root,int key) 
{
	if(root==NULL) return root;
	if(key<root->data) root->left=deletenode(root->left,key);
	else if(key>root->data) root->right=deletenode(root->right,key);
	else{
		if(root->left==NULL){
			node*tmp=root->right;
			delete root;
			return tmp; 
		} 
		else if(root->right==NULL){
			node*tmp=root->left;
			delete root;
			return tmp; 
		}else{
			node*tmp=minnode(root->right);
			root->data=tmp->data;
			root->right=deletenode(root->right,tmp->data); 
		} 
	} 
	return root; 
}
node* insert(node*root,int key) 
{
	if(root==NULL) return new node(key);
	if(key<root->data) root->left=insert(root->left,key);
	else if(key>root->data) root->right=insert(root->right,key);
	return root;  
}
void inorder(node*root) 
{
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right); 
	} 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	node*root=new node(a[0]) ;
	for(int i=0;i<n;i++){
		insert(root,a[i]); 
	}
	int x; cin>>x;
	root=deletenode(root,x); 
	inorder(root);
	return 0; 
}
