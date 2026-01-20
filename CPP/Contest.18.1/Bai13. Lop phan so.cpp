#include<iostream>
#include<algorithm>
#include<vector> 

using namespace std;

class thoigian 
{
private:
	int gio,phut,giay;
public:
	friend istream& operator >>(istream& in,thoigian &x) {
		cin>>x.gio>>x.phut>>x.giay;
		return in; 
	}
	friend ostream& operator <<(ostream& out,thoigian x) {
		cout<<x.gio<<" "<<x.phut<<" "<<x.giay<<endl; 
		return out; 
	}
	friend bool operator < (thoigian a,thoigian b){
		if(a.gio!=b.gio) return a.gio<b.gio;
		else if(a.phut!=b.phut) return a.phut<b.phut;
		else return a.giay<b.giay; 
	} 
};
int main() 
{
	int n; cin>>n;
	vector<thoigian> v; 
	while(n--){
		thoigian x; cin>>x;
		v.push_back(x); 
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++) cout<<v[i];
	return 0; 
}
