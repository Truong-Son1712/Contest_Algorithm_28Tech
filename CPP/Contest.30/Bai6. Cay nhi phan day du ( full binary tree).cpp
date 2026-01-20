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
	if(c=='L')root->left=new node(v);
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
bool ok=true;
void duyet(node *root) 
{
	if(root==NULL) return;
	//cout<<root->data<<" "; 
	if((root->left==NULL&&root->right!=NULL)||(root->left!=NULL&&root->right==NULL)){
		ok=false; return; 
	}else{
		duyet(root->left);
		duyet(root->right); 
	} 
}
/*void duyet2(node*root) 
{
	if(root==NULL) return; 
	cout<<root->data<<" ";
	duyet2(root->left);
	duyet2(root->right); 
}*/
int main() 
{
	int n; cin>>n;
	node *root=NULL;
	while(n--) 
	{
		int u,v; char c;
		cin>>u>>v>>c; 
		if(root==NULL) root=new node(u);
		insertnode(root,u,v,c); 
	}
	duyet(root);
	//cout<<endl;
	//duyet2(root); 
	if(ok) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
