#include<iostream>
#include<map>
using namespace std;

struct node 
{
	int data;
	node*left;
	node*right;
	node(int x){
		data=x;
		left=right=NULL;
	} 
};
int pre[105];
int in[105];
int n; 
map<int,int>mppre,mpin; 
void builtree(node*root,int in_l,int in_r) 
{
	int in_pos=mpin[root->data];
	int pre_pos=mppre[root->data]; 
	if(in_pos>in_l){
		root->left=new node(pre[pre_pos+1]); 
		builtree(root->left,in_l,in_pos-1); 
	} 
	if(in_pos<in_r){
		int soluongtrai=in_pos-in_l;
		root->right=new node(pre[pre_pos+soluongtrai+1]);
		builtree(root->right,in_pos+1,in_r); 
	} 
}
void postorder(node*root) 
{
	if(root!=NULL) 
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" "; 
	}
}
int main() 
{
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>pre[i];
		mppre[pre[i]]=i; 
	}
	for(int i=0;i<n;i++){
		cin>>in[i];
		mpin[in[i]]=i; 
	} 
	node*root=new node(pre[0]);
	builtree(root,0,n-1);
	postorder(root);
	return 0; 
}
