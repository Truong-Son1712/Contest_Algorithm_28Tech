#include<iostream>
#include<string>
#include<sstream>
#include<vector> 

using namespace std;


void chuanhoa(string &s){
	if(s[1]=='/') s='0'+s;
	if(s[4]=='/') s.insert(3,"0"); 
} 
class nhanvien 
{
private:
	string ma,ten,gt,ns,dc,nkhd;
	string mst; 
public:
	void setma(int i){
		string tt=to_string(i);
		string so0(5-tt.size(),'0');
	 	ma= so0+tt; 
	} 
	friend istream& operator >>(istream& in,nhanvien &x){
		cin.ignore(1); getline(cin,x.ten); cin>>x.gt>>x.ns;
		cin.ignore(1); getline(cin,x.dc); cin>>x.mst>>x.nkhd;
		chuanhoa(x.ns); chuanhoa(x.nkhd);  
		return in; 
	}
	friend ostream& operator <<(ostream& out, nhanvien x){
		cout<<x.ma<<" "<<x.ten<<" "<<x.gt<<" "<<x.ns<<" "<<x.dc<<" "<<x.mst<<" "<<x.nkhd<<endl;
		return out; 
	} 
};
int main() 
{
	int n; cin>>n;
	nhanvien a[n]; 
	for(int i=0;i<n;i++){
		nhanvien x; cin>>x;
		x.setma(i+1);  
		a[i]=x; 
	} 
	for(int i=0;i<n;i++) cout<<a[i]; 
	return 0; 
}

