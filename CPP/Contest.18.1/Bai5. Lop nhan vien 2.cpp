#include<iostream>
#include<string>
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
} 
void chuanhoa(string &s){
	if(s[1]=='/') s="0"+s;
	if(s[4]=='/') s.insert(3,"0"); 
} 
class nhanvien 
{
private:
	string manv="00001";
	string ten,gt,ns,dc,mst,nkhd;
public:
	friend istream& operator >>(istream &in,nhanvien &x){
		getline(cin,x.ten); cin>>x.gt>>x.ns;
		getchar(); getline(cin,x.dc); cin>>x.mst>>x.nkhd;
		chuanhoa(x.ns);chuanhoa(x.nkhd);chuanhoa2(x.ten); 
		return in; 
	} 
	friend ostream& operator <<(ostream &out,nhanvien x){
		cout<<x.manv<<" "<<x.ten<<x.gt<<" "<<x.ns<<" "<<x.dc<<" "<<x.mst<<" "<<x.nkhd;
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
