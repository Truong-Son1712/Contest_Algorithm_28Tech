#include<iostream>
#include<string>
#include<vector>

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
	string gethang(){
		return hang; 
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
	string HANG; cin>>HANG;
	cout<<"DANH SACH XE HANG "<<HANG<<" :"<<endl;
	for(int i=0;i<v2.size();i++){
		if(v2[i].gethang()==HANG) cout<<v2[i]; 
	}
	for(int i=0;i<v1.size();i++){
		if(v1[i].gethang()==HANG) cout<<v1[i]; 
	}
	return 0; 
}
