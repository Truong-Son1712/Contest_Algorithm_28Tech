#include<iostream>
#include<string> 
#include<iomanip>
#include<sstream>
#include<vector> 

using namespace std;

void chuanhoa2(string &s){
	for(int i=0;i<s.size();i++) s[i]=tolower(s[i]); 
	stringstream ss(s);
	string world;
	vector<string> v;
	while(ss>>world){
		v.push_back(world); 
	} 
	for(int i=0;i<v.size();i++) v[i][0]=toupper(v[i][0]);
	s="";
	for(int i=0;i<v.size();i++) s+=v[i]+" ";
	s.erase(s.size()-1); 
} 
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
		chuanhoa(x.ns); chuanhoa2(x.ten); 
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
