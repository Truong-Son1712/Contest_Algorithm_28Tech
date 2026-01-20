#include<iostream>
#include<string>

using namespace std;

struct Node 
{
	int data;
	Node* next;	
};
typedef Node* node;
node makenode(int x) 
{
	node tmp = new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp; 
}
bool empty(node a) 
{
	return a==NULL ;
}
void chendau(node &a,int x) 
{
	node tmp=makenode(x);
	if(a==NULL) a=tmp;
	else{
		tmp->next=a;
		a=tmp; 
	}
}
void xoacuoi(node &a)
{
	if(a==NULL) return;
	node truoc=NULL, sau=a; 
	while(sau->next!=NULL){
		 truoc=sau;
		 sau=sau->next ;
	} 
	if(truoc==NULL) a=NULL;
	else truoc->next=NULL; 
}
int front(node a)
{
	while(a->next!=NULL){
		a=a->next; 
	} 
	return a->data; 
}
int main() 
{
	int n; cin>>n;
	node a; 
	while(n--){
		string s; cin>>s;
		if(s=="push"){
			int x; cin>>x;
			chendau(a,x);
		} 
		else if(s=="pop"){
			xoacuoi(a); 
		}
		else{
			if(empty(a)) cout<<"EMPTY"<<endl;
			else cout<<front(a)<<endl; 
		} 
	} 
	return 0; 
}
