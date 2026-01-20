#include<iostream>
#include<string>

using namespace std;

class luong 
{
private:
	string ma,ten;
	int lcb;
public:
	friend istream& operator >>(istream& in,luong& x){
		cin>>x.ma; getchar(); getline(cin,x.ten); cin>>x.lcb;
		return in; 
	}	
	friend ostream& operator <<(ostream& out,luong x){
		int phucap,heso,luong; 
		if(x.ma[1]=='T') phucap=2000000;
		else if(x.ma[1]=='P') phucap=900000;
		else phucap=500000;
		heso=stoi(x.ma.substr(2));
		luong=phucap+heso*x.lcb;
		cout<<x.ma<<" "<<x.ten<<" "<<heso<<" "<<luong;
		return out; 
	} 
};
int main() 
{
	luong x; cin>>x; cout<<x;
	return 0; 
}
