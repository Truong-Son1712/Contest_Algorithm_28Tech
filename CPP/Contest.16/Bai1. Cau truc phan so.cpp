#include<iostream>
#include<math.h>
 
using namespace std;

int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
struct ps{
	int ts,ms;
	friend ps operator + (ps a, ps b){
		ps res;
		res.ms=a.ms*b.ms;
		res.ts=a.ts*b.ms+b.ts*a.ms;
		return res; 
	} 
	friend ps operator - (ps a, ps b){
		ps res;
		res.ms=a.ms*b.ms;
		res.ts=a.ts*b.ms-b.ts*a.ms;
		return res; 
	} 
	friend istream& operator >>(istream & in,ps &x){
		in>>x.ts>>x.ms;
		return in; 
	} 
	friend ostream& operator <<(ostream & out,ps x){
		out<<x.ts<<"/"<<x.ms<<endl; 
		return out; 
	} 
};
void toigian(ps &a)
{
	if(a.ms<0){
		a.ms*=-1;
		a.ts*=-1; 
	} 
	int ucln= gcd(a.ms,abs(a.ts));
	a.ms=a.ms/ucln ;
	a.ts=a.ts/ucln ;
} 
int main() 
{
	ps a, b;
	cin>>a>>b;
	ps c=a+b;
	ps d=a-b;  
	toigian(a),toigian(b),toigian(c),toigian(d); 
	cout<<a<<b<<c<<d; 
	return 0; 
}
