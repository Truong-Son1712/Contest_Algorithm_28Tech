#include<iostream>

using namespace std;

struct sp 
{
	int a,b;
	friend istream& operator >>(istream & in,sp &x){
		in>>x.a>>x.b;
		return in; 
	} 
	friend ostream& operator <<(ostream & out,sp x){
		out<<x.a<<" "<<x.b<<endl; 
		return out; 
	}  
	friend sp operator +(sp x,sp y){
		sp res;
		res.a=x.a+y.a;
		res.b=x.b+y.b; 
		return res; 
	}
	friend sp operator -(sp x,sp y){
		sp res;
		res.a=x.a-y.a;
		res.b=x.b-y.b; 
		return res; 
	}
	friend sp operator *(sp x,sp y){
		sp res;
		res.a= (x.a*y.a)-(x.b*y.b);
		res.b= (x.a*y.b)+(x.b*y.a);
		return res; 
	} 
};
int main() 
{
	sp a,b;
	cin>>a>>b;
	sp c=a+b;
	sp d=a-b;
	sp e=a*b;
	cout<<c<<d<<e;
	return 0; 
}
