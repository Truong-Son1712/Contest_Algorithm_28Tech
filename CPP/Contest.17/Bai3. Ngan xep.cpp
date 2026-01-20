#include<iostream>
#include<string> 

using namespace std;

struct Node 
{
	int data;
	Node* next;	
};
typedef struct Node* node;
node makenode(int x) 
{
	node tmp= new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp; 
}
bool empty(node a){
	return a==NULL; 
} 
void push(node &a,int x) 
{
	node tmp=makenode(x);
	if(a==NULL) a=tmp;
	else{
		tmp->next=a;
		a=tmp; 
	} 
}
void pop(node &a) 
{
	if(a==NULL) return; 
	a=a->next; 
}
void show(node a) 
{
	while(a!= NULL){
		cout<<a->data<<" ";
		a=a->next; 
	} 
}
int main() 
{
	int n; cin>>n;
	node a=NULL;
	while(n--){
		string s; cin>>s;
		if(s=="push"){
			int x; cin>>x;
			push(a,x); 
		} 
		else if(s=="pop") pop(a);
		else{
			if(empty(a)) cout<<"EMPTY"<<endl<<endl;
			else{
				show(a);
				cout<<endl; 
			}
		} 
	} 
	return 0; 
}
