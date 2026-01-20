#include<iostream>

using namespace std;

struct node 
{
	int data;
	node* left;
	node* right;
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
bool search(node*root,int key) 
{
	if(root==NULL) return false;
	if(root->data==key) return true;
	else if(root->data<key) return search(root->right,key);
	else return search(root->left,key); 
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
	int x; cin>>x; 
	if(search(root,x)) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
