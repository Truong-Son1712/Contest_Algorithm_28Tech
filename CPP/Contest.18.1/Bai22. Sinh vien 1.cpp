#include<iostream>
#include<string> 
#include<iomanip> 

using namespace std;

void chuanhoa(string &s){
	if(s[1]=='/') s="0"+s;
	if(s[4]=='/') s.insert(3,"0"); 
} 
class sinhvien 
{
private: 
	string ma,ten,ns,lop;
	double gpa;
public:
	sinhvien(){
		ma="" ; ten="";ns="";lop=""; gpa=0; 
	}
	void setma(int i){
		string tt=to_string(i);
		string so0(3-tt.size(),'0');
		ma= "SV"+so0+tt; 
	} 
	friend istream& operator >>(istream& in, sinhvien &x){
		cin.ignore(1); getline(cin,x.ten); cin>>x.lop>>x.ns>>x.gpa;
		chuanhoa(x.ns); 
		return in; 
	}
	friend ostream& operator <<(ostream& out, sinhvien x){
		cout<<x.ma<<" "<<x.ten<<" "<<x.lop<<" "<<x.ns<<" "<<fixed<<setprecision(2)<<x.gpa<<endl; 
		return out; 
	} 
};
int main() 
{
	int n; cin>>n;
	sinhvien a[n]; 
	for(int i=0;i<n;i++){
		sinhvien x; cin>>x; 
		x.setma(i+1); 
		a[i]=x; 
	} 
	for(int i=0;i<n;i++) cout<<a[i];
	return 0; 
}
