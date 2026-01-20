#include<iostream>
#include<string>

using namespace std;

struct Node 
{
	string data;
	int ts;
	Node* next; 
};
typedef struct Node* node;
node makenode(string s) 
{
	node tmp = new Node();
	tmp->data=s; tmp->ts=1;
	tmp->next=NULL;
	return tmp; 
}
void chencuoi(node &a, string s){
	node tmp=makenode(s);
	if(a==NULL) a=tmp;
	else{
		node p=a;
		while(p->next!=NULL){
			p=p->next; 
		}
		p->next = tmp; 
	} 
} 
void in(node a)
{
	while(a!=NULL){
		cout<<a->data<<" "<<a->ts<<endl;
		a=a->next; 
	} 
}
int main() 
{
	string s;
	node a=NULL; 
	while(cin>>s){
		bool ok=false;
		node p=a; 
		while(p!=NULL){
			if(p->data==s){
				p->ts++; 
				ok=true;
				break; 
			}
			p=p->next; 
		}
		if(ok==false){
			 chencuoi(a,s); 
		} 
	} 
	in(a);
	return 0; 
}
