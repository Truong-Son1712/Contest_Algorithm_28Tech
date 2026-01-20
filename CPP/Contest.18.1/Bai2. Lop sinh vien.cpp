#include<iostream>
#include<iomanip>

using namespace std;

class thisinh 
{
private:
	string ten, ns;
	double diem1,diem2,diem3;
public:
	friend istream& operator >>(istream& in,thisinh &x){
		getline(cin,x.ten); cin>>x.ns>>x.diem1>>x.diem2>>x.diem3; 
		return in; 
	}
	friend ostream& operator <<(ostream& out,thisinh x){
		cout<<x.ten<<" "<<x.ns<<" "<<fixed<<setprecision(1)<<x.diem1+x.diem2+x.diem3; 
	} 
}; 
int main() 
{
	thisinh x;
	cin>>x;
	cout<<x;
	return 0; 
}
