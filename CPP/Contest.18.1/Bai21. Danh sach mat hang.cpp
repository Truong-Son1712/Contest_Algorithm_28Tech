#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class hang 
{
private: 
	string ma,ten,dv;
	int mua,ban,ln; 
public:
	void getma(int i){
		string tt=to_string(i);
		string so0(4-tt.size(),'0');
		ma="MH"+so0+tt; 
	} 
	friend istream& operator >>(istream& in,hang &x){
		cin.ignore(1); getline(cin,x.ten);
		cin>>x.dv>>x.mua>>x.ban;
		x.ln=x.ban-x.mua;
		return in; 
	} 
	friend ostream& operator <<(ostream& out,hang x){
		cout<<x.ma<<" "<<x.ten<<" "<<x.dv<<" "<<x.mua<<" "<<x.ban<<" "<<x.ln<<endl;
		return out; 
	} 
	friend bool operator < (hang a,hang b){
		if(a.ln!=b.ln) return a.ln>b.ln;
		else return a.ma<b.ma; 
	}	
};
int main() 
{
	int n; cin>>n;
	hang a[n]; 
	for(int i=0;i<n;i++){
		hang x; cin>>x;
		x.getma(i+1);
		a[i]=x; 
	} 
	sort(a,a+n);
	for(int i=0;i<n;i++) cout<<a[i];
	return 0; 
}
