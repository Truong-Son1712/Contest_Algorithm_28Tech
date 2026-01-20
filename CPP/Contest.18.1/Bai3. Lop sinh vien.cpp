#include<iostream>
#include<iomanip>

using namespace std;

void chuanhoa(string &s){
	if(s[1]=='/') s="0"+s;
	if(s[4]=='/') s.insert(3,"0"); 
} 
class sinhvien 
{
private:
	string ma;
	string ten,lop,ns;
	double gpa;
public: 
	sinhvien(){
		ma="SV001";
		ten=""; ns=""; lop=""; 
		gpa=0; 
	} 
	friend istream& operator>>(istream& in,sinhvien &x){
		getline(cin,x.ten); cin>>x.lop>>x.ns>>x.gpa;
		chuanhoa(x.ns); 
		return in; 
	} 
	friend ostream& operator<<(ostream& out,sinhvien x){
		cout<<x.ma<<" "<<x.ten<<" "<<x.lop<<" "<<x.ns<<" "<<fixed<<setprecision(1)<<x.gpa;
		return out; 
	} 
};
int main() 
{
	sinhvien x;
	cin>>x; cout<<x;
	return 0; 
}
