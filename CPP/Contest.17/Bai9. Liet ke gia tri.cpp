#include<iostream>

using namespace std;

struct Node 
{
	int data, ts;
	Node* next;	
};
typedef struct Node* node;
node makenode(int x) 
{
	node tmp= new Node();
	tmp->data=x;
	tmp->ts=1;
	tmp->next=NULL; 
	return tmp; 
}
void chencuoi(node &a,int x) 
{
	node tmp=makenode(x);
	if(a==NULL) a=tmp;
	else{
		node p=a;
		while(p->next!=NULL){
			p=p->next; 
		} 
		p->next=tmp; 
	} 
}
void in(node a) 
{
	while(a!=NULL){
		cout<<a->data<<" ";
		a=a->next; 
	} 
}
int main() 
{
	int n; cin>>n;
	node a=NULL; 
	while(n--){
		int x; cin>>x;
		bool ok=false;
		node p=a; 
		while(p!=NULL){
			if(p->data==x){
				ok=true;
				break; 
			} 
			p=p->next; 
		} 
		if(ok==false) chencuoi(a,x); 
	} 
	in(a);
	return 0; 
}
