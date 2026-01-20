#include<iostream>

using namespace std;

class nhanvien 
{
private:
	string manv="00001";
	string ten,gt,ns,dc,mst,nkhd;
public:
	friend istream& operator >>(istream &in,nhanvien &x){
		getline(cin,x.ten); cin>>x.gt>>x.ns;
		getchar(); getline(cin,x.dc); cin>>x.mst>>x.nkhd;
		return in; 
	} 
	friend ostream& operator <<(ostream &out,nhanvien x){
		cout<<x.manv<<" "<<x.ten<<" "<<x.gt<<" "<<x.ns<<" "<<x.dc<<" "<<x.mst<<" "<<x.nkhd;
		return out; 
	} 
};
int main() 
{
	nhanvien x;
	cin>>x;
	cout<<x;
	return 0; 
}
