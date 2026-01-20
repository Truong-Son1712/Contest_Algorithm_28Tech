#include<iostream>
#include<string>
#include<iomanip> 

using namespace std;

struct student 
{
	string ma,ten;
	double gpa; 
	friend istream& operator >>(istream& in, student &x){
		cin>>x.ma; scanf("\n"); getline(cin,x.ten); cin>>x.gpa;
		return in; 
	} 
	friend ostream& operator <<(ostream& out, student x){
		cout<<x.ma<<" "<<x.ten<<" "<<fixed<<setprecision(2)<<x.gpa<<endl;
		return out; 
	} 
};
struct Node 
{
	student s;
	Node* next; 
};
typedef struct Node* node;
node makenode(){
	student x; cin>>x;
	node temp= new Node();
	temp->s = x;
	temp->next = NULL;
	return temp; 
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

void chendau(node &a) 
{
	node tmp= makenode();
	if(a==NULL) a=tmp;
	else{
		tmp->next=a;
		a=tmp; 
	} 
}
void chencuoi(node &a)	
{
	node tmp=makenode();
	if(a==NULL) a=tmp;
	else{
		node p=a;
		while(p->next!=NULL){
			p=p->next; 
		} 
		p->next=tmp; 
	} 
}
void chengiua(node &a,int pos) 
{
	int n=size(a);
	if(pos<=0||pos>n+1) return;
	if(pos==1){
		chendau(a); return; 
	}
	else if(pos==n+1){
		chencuoi(a); return; 
	}
	node p=a;
	for(int i=1;i<pos-1;i++) p=p->next;
	node tmp=makenode();
	tmp->next=p->next;
	p->next=tmp; 
}
void in(node a) 
{
	while(a!=NULL){
		cout<<a->s;
		a=a->next; 
	} 
}
int main() 
{
	int n; cin>>n;
	node a=NULL; 
	while(n--){
		int tv; cin>>tv;
		if(tv==1) chendau(a);
		else if(tv==2) chencuoi(a);
		else{
			int pos; cin>>pos;
			chengiua(a,pos); 
		}		
	} 
	in(a);
	return 0; 
}
