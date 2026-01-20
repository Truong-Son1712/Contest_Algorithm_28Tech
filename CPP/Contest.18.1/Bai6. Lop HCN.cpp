#include<iostream>
#include<string> 

using namespace std;

class hcn 
{
private:
	int a,b;
	string mau;
public: 
	friend istream& operator >>(istream& in, hcn &x){
		cin>>x.a>>x.b>>x.mau;
		x.mau[0]=toupper(x.mau[0]); 
		return in; 
	}	
	friend ostream& operator <<(ostream& out,hcn x){
		cout<<2*(x.b+x.a)<<" "<<x.a*x.b<<" "<<x.mau;
		return out; 
	} 
	int geta(){
		return a; 
	} 
	int getb(){
		return b; 
	} 
	
};
int main() 
{
	hcn x;
	cin>>x;
	if(x.geta()<=0||x.getb()<=0) cout<<"INVALID";
	else cout<<x; 
	return 0; 
}
