#include<iostream>
#include<string>

using namespace std;

class nhanvien
{
private:
	string ten,chuc, ma="NV01"; 
	int luong,ngay;
public:
	friend istream& operator >>(istream& in,nhanvien &x){
		getline(cin,x.ten); cin>>x.luong>>x.ngay>>x.chuc;
		return in; 
	} 
	friend ostream& operator <<(ostream& out,nhanvien x){
		int phucap,thuong,thunhap,luongt;
		if(x.chuc=="GD") phucap=250000;
		else if(x.chuc=="PGD") phucap=200000;
		else if(x.chuc=="TP") phucap=180000;
		else phucap= 150000;
		luongt=x.luong*x.ngay; 
		if(x.ngay>=25) thuong=luongt/5;
		else if(x.ngay>=22&&x.ngay<25) thuong=luongt/10;
		else thuong =0;
		thunhap=luongt+phucap+thuong;
		cout<<x.ma<<" "<<x.ten<<" "<<luongt<<" "<<thuong<<" "<<phucap<<" "<<thunhap;
		return out; 
	} 
};
int main() 
{
	nhanvien x; cin>>x; cout<<x;
	return 0; 
}
