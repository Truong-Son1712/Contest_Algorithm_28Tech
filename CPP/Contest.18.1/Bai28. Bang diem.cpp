#include<iostream>
#include<string> 
#include<algorithm>
#include<iomanip> 
#include<numeric> 
#include<vector> 

using namespace std;

class hocsinh 
{
private: 
	string ma, ten;
	double d[10],tbc; 
public:
	void nhap(){
		scanf("\n"); getline(cin,ten); 
		tbc=0; 
		for(int i=0;i<10;i++){
			cin>>d[i];
			tbc+=d[i]; 
		} 
		tbc/=10; 
	} 
	string xeploai(){
		if(tbc>=9) return "XUAT SAC";
		else if(tbc>=8) return "GIOI";
		else if(tbc>=7) return "KHA";
		else if(tbc>=5) return "TB";
		else return "YEU"; 
	}
	void xuat(){
		cout<<ma<<" "<<ten<<" "<<fixed<<setprecision(1)<<tbc<<" "<<xeploai()<<endl;  
	} 
	void setma(int i){
		string tt=to_string(i);
		if(tt.size()==1) ma="HS0"+tt;
		else ma="HS"+tt; 
	} 
	friend bool operator < (hocsinh a,hocsinh b){
		if(a.tbc!=b.tbc) return a.tbc>b.tbc;
		else return a.ma<b.ma; 
	} 
};
int main() 
{
	int n; cin>>n;
	vector<hocsinh> v; 
	for(int i=0;i<n;i++){
		hocsinh x; x.nhap(); 
		x.setma(i+1);
		v.push_back(x); 
	} 
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++) v[i].xuat();
	return 0; 
}
