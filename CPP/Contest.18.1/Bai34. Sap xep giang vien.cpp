#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

string getten(string s)
{
	stringstream ss(s);
	vector<string> v;
	string world;
	while(ss>>world){
		v.push_back(world); 
	} 
	return v[v.size()-1]; 
}
string chuanhoa(string s) 
{
	stringstream ss(s);
	vector <string> v;
	string world;
	while(ss>>world){
		v.push_back(world); 
	} 
	world="";
	for(int i=0;i<v.size();i++) world+=v[i][0];
	for(int i=0;i<world.size();i++) world[i]=toupper(world[i]);
	return world; 
}
class giangvien 
{
private:
	string ma,hoten,ten,bm,bomon;
public:
	friend istream& operator >>(istream& in, giangvien& x){
		scanf("\n"); getline(cin,x.hoten); getline(cin,x.bomon); 
		x.bm=chuanhoa(x.bomon); 
		x.ten=getten(x.hoten);
		return in; 
	} 
	void setma(int i){
		string tt=to_string(i);
		if(tt.size()==1) ma="GV0"+tt;
		else ma="GV"+tt; 
	} 
	friend ostream& operator <<(ostream& out, giangvien x){
		cout<<x.ma<<" "<<x.hoten<<" "<<x.bm<<endl;
		return out; 
	} 
	friend bool operator < (giangvien a,giangvien b){
		if(a.ten!=b.ten) return a.ten<b.ten;
		else return a.ma<b.ma; 
	} 
};
int main() 
{
	int n; cin>>n;
	giangvien a[n]; 
	for(int i=0;i<n;i++){
		giangvien x; cin>>x;
		x.setma(i+1);
		a[i]=x; 
	} 
	sort(a,a+n) ;
	for(int i=0;i<n;i++) cout<<a[i];
	return 0; 
}
