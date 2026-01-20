#include<iostream>
#include<string>
#include<vector>
#include<algorithm> 

using namespace std;

class Vehicle 
{
protected:
	string ma,ten,hang,mau;
	int gia;
public:
	void setma(string s){
		ma=s; 
	} 
	int getgia(){
		return gia; 
	} 
};
class xemay : public Vehicle 
{
private:
	int tocdo;
public:
	friend istream& operator >> (istream& in, xemay &x) {
		cin>>x.ten>>x.hang>>x.mau>>x.tocdo>>x.gia;
		return in; 
	}
	friend ostream& operator <<(ostream& out, xemay x){
		cout<<x.ma<<" "<<x.ten<<" "<<x.hang<<" "<<x.mau<<" "<<x.tocdo<<" "<<x.gia<<endl;
		return out; 
	} 
	friend bool operator < (xemay a,xemay b){
		if(a.gia!=b.gia) return a.gia>b.gia;
		else return a.ma<b.ma; 
	} 
}; 
class oto : public Vehicle 
{
private:
	int maluc;
public:
	friend istream& operator >> (istream& in, oto &x) {
		cin>>x.ten>>x.hang>>x.mau>>x.maluc>>x.gia;
		return in; 
	}
	friend ostream& operator <<(ostream& out, oto x){
		cout<<x.ma<<" "<<x.ten<<" "<<x.hang<<" "<<x.mau<<" "<<x.maluc<<" "<<x.gia<<endl;
		return out; 
	} 
	friend bool operator < (oto a,oto b){
		if(a.gia!=b.gia) return a.gia>b.gia;
		else return a.ma<b.ma; 
	} 
}; 
int main() 
{
	int n; cin>>n;
	vector<xemay> v1;
	vector<oto> v2;
	while(n--){
		string ma; cin>>ma;
		if(ma[0]=='O'){
			oto x; cin>>x;
			x.setma(ma); 
			v2.push_back(x); 
		} else{
			xemay x; cin>>x;
			x.setma(ma);
			v1.push_back(x); 
		} 
	} 
	int tt, td; cin>>tt>>td;
	cout<<"DANH SACH OTO :"<<endl;
	for(int i=0;i<v2.size();i++){
		int gia=v2[i].getgia();
		if(gia>=tt&&gia<=td) cout<<v2[i]; 
	} 
	cout<<"DANH SACH XE MAY :"<<endl;
	for(int i=0;i<v1.size();i++){
		int gia=v1[i].getgia();
		if(gia>=tt&&gia<=td) cout<<v1[i]; 
	} 
	return 0; 
}
