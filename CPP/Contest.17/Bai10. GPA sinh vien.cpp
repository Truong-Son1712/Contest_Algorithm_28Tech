#include<iostream>
#include<string>
#include<iomanip>
 
using namespace std;

struct sinhvien 
{
	string ma,ten;
	double gpa;
	friend istream& operator >>(istream& in,sinhvien &x){
		cin>>x.ma; scanf("\n"); getline(cin,x.ten); cin>>x.gpa;
		return in; 
	}	
	friend ostream& operator <<(ostream& out,sinhvien x){
		cout<<x.ma<<" "<<x.ten<<" "<<fixed<<setprecision(2)<<x.gpa<<endl; 
		return out; 
	} 
};
struct Node 
{
	sinhvien s;
	Node* next;	
};
typedef struct Node* node;
node makenode() 
{
	sinhvien x; cin>>x;
	node tmp= new Node();
	tmp->s=x;
	tmp->next=NULL; 
	return tmp; 
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
int main() 
{
	int n; cin>>n;
	node a=NULL;
	while(n--) {
		chencuoi(a); 
	}
	node p=a;double max=a->s.gpa; 
	while(p!=NULL){
		if(p->s.gpa>max){
			max=p->s.gpa; 
		} 
		p=p->next; 
	} 
	p=a;
	while(p!=NULL){
		if(p->s.gpa==max){
			 cout<<p->s; 
		} 
		p=p->next; 
	} 
	return 0; 
}
