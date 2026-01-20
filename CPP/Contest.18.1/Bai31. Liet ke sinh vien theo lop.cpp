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
		cout<<x.ma<<" "<<x.ten<<" "<<x.lop<<" "<<x.email<<endl; 
		return out; 
	}
	string getlop(){
		return lop; 
	} 
};
int main() 
{
	int n; cin>>n;
	sinhvien a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int Q; cin>>Q;
	while(Q--){
		string lp; cin>>lp;
		cout<<"DANH SACH SINH VIEN LOP "<<lp<<" :"<<endl; 
		for(int i=0;i<n;i++){
			string LOP=a[i].getlop();
			if(LOP==lp)  cout<<a[i]; 
		} 
	} 
	return 0; 
}
