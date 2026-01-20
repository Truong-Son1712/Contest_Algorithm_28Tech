#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

void chuanhoa(string &s) 
{
	for(int i=0;i<s.size();i++) s[i]=tolower(s[i]); 
	string world;
	vector<string> v;
	stringstream ss(s); 
	while(ss>>world){
		v.push_back(world); 
	} 
	for(int i=0;i<v.size();i++) v[i][0]=toupper(v[i][0]);
	s="";
	for(int i=0;i<v.size()-1;i++) s+=v[i]+" ";
	s+=v[v.size()-1];
}
class sinhvien 
{
private:
	string ma,ten,lop,email;
public:
	friend istream& operator >>(istream& in, sinhvien &x) {
		cin>>x.ma; scanf("\n"); getline(cin,x.ten); cin>>x.lop>>x.email; 
		chuanhoa(x.ten); 
		return in; 
	}
	friend ostream& operator <<(ostream& out, sinhvien x) {
		cout<<x.ma<<" "<<x.ten<<" "<<x.lop<<" "<<x.email; 
		return out; 
	}
	string getnganh(){
		string nganh;
		if(lop.substr(0,2)=="KT") nganh="KT";
		else if(lop.substr(0,3)=="MKT") nganh= "MKT"; 
		else if(lop.substr(0,4)=="CNTT") nganh="CNTT"; 
		else if(lop.substr(0,4)=="DTVT") nganh="DTVT"; 
		return nganh; 
	} 
};
int main() 
{
	int n; cin>>n;
	sinhvien a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int Q; cin>>Q;
	while(Q--){
		string ng; cin>>ng;
		string NGANH;
		if(ng=="KT") NGANH="KE TOAN";
		else if(ng=="MKT") NGANH ="MAKETING";
		else if(ng=="CNTT") NGANH="CONG NGHE THONG TIN";
		else if(ng=="DTVT") NGANH="DIEN TU VIEN THONG"; 
		cout<<"DANH SACH SINH VIEN NGANH "<<NGANH<<" :"<<endl; 
		for(int i=0;i<n;i++){
			string NG=a[i].getnganh();
			if(NG==ng)  cout<<a[i]<<endl; 
		} 
	}  
	return 0; 
}
