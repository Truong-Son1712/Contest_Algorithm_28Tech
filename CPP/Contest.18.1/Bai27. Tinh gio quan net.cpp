#include<iostream>
#include<algorithm>
#include<string> 
#include<sstream>
#include<vector> 

using namespace std;

void thoigian(string hv,string hr, int &htg,int &ptg)
{
	int hhv=stoi(hv.substr(0,2));
	int phv=stoi(hv.substr(3)); 
	int hhr=stoi(hr.substr(0,2));
	int phr=stoi(hr.substr(3));
	htg=hhr-hhv;
	if(phr>=phv){
		ptg=phr-phv; 
	}else{
		ptg=60+phr-phv;
		htg--; 
	} 
}
class khachhang 
{
private:
	string us,ps,ten,hv,hr,tg; 
	int htg,ptg; 
public: 
	friend istream& operator >>(istream& in,khachhang &x){
		cin>>x.us>>x.ps; getchar(); getline(cin,x.ten); cin>>x.hv>>x.hr; 
		x.htg=0,x.ptg=0; thoigian(x.hv,x.hr,x.htg,x.ptg);
		x.tg=to_string(x.htg)+" gio "+to_string(x.ptg)+" phut";  
		return in; 
	} 
	friend ostream& operator <<(ostream& out,khachhang x){
		cout<<x.us<<" "<<x.ps<<" "<<x.ten<<" "<<x.tg<<endl; 
		return out; 
	} 
	friend bool operator <(khachhang a,khachhang b){
		if(a.htg!=b.htg) return a.htg>b.htg;
		else if(a.ptg!=b.ptg) return a.ptg>b.ptg;
		else return a.us<b.us; 
	} 
};
int main() 
{
	int n; cin>>n;
	khachhang a[n]; 
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++) cout<<a[i];
	return 0; 
}
