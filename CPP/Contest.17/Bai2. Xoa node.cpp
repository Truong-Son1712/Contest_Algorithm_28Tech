#include<iostream>

using namespace std;

struct Node 
{
	int data;
	Node* next; 
};
typedef struct Node* node ;
node makenode(int x) 
{
	node tmp= new Node();
	tmp-> data=x;
	tmp-> next=NULL;
	return tmp; 
}
void themcuoi(node &a, int x) 
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
void xoa(node &a,int pos) 
{
	node truoc=NULL, sau=a;
	for(int i=1;i<pos;i++){
		truoc=sau;
		sau=sau->next; 
	} 
	if(truoc==NULL) a=a->next;
	else{
		truoc->next=sau->next; 
	} 
}
void in(node a) 
{
	while(a!=NULL){
		cout<<a->data<<" ";
		a=a->next; 
	} 
}
int size(node a) 
{
	int cnt=0;
	while(a!=NULL){
		++cnt;
		a=a->next; 
	} 
	return cnt; 
}
bool empty(node a) 
{
	return a==NULL; 
}
int main() 
{
	int n,value; cin>>n>>value;
	node a=NULL;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		themcuoi(a,x); 
	} 
	for(int i=1;i<=size(a);i++){
		node p=a;
		for(int j=1;j<i;j++){
			p=p->next; 
		} 
		if(p->data==value){
			xoa(a,i); 
			i--; 
		} 
	} 
	if(empty(a)) cout<<"EMPTY";
	else in(a); 
	return 0; 
}
