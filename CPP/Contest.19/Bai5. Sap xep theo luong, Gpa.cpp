#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std; 

void chuanhoa2(string &s) 
{
	if(s[1]=='/') s="0"+s;
	if(s[4]=='/') s.insert(3,"0");
}
void chuanhoa1(string &s)
{
	for(int i=0;i<s.size();i++) s[i]=tolower(s[i]); 
	stringstream ss(s);
	string world;
	vector<string> v;
	while(ss>>world){
		v.push_back(world); 
	} 
	for(int i=0;i<v.size();i++) v[i][0]=toupper(v[i][0]);
	s="";
	for(int i=0;i<v.size()-1;i++) s+=v[i]+" ";
	s+=v[v.size()-1];  
}
class Person 
{
protected: 
	string ma,ten,ns,dc;
public:
	void setma(string s){
		ma=s; 
	} 
};
class student : public Person 
{
private: 
	string lop;
	double gpa;
public:
	friend istream& operator >> (istream& in, student &x){
		scanf("\n"); getline(cin,x.ten); chuanhoa1(x.ten);
		cin>>x.ns; chuanhoa2(x.ns);
		scanf("\n"); getline(cin,x.dc);
		cin>>x.lop>>x.gpa;
		return in;
	} 
	friend ostream& operator <<(ostream& out, student x) {
		cout<<x.ma<<" "<<x.ten<<" "<<x.ns<<" "<<x.dc<<" "<<x.lop<<" "<<fixed<<setprecision(2)<<x.gpa<<endl;
		return out; 
	}
	friend bool operator < (student a,student b){
		if(a.gpa!=b.gpa) return a.gpa>b.gpa;
		else return a.ma<b.ma; 
	} 
};
class teacher : public Person 
{
private:
	string khoa;
	int luong;
public:
	friend istream& operator >>(istream& in,teacher &x){
		scanf("\n"); getline(cin,x.ten); chuanhoa1(x.ten);
		cin>>x.ns; chuanhoa2(x.ns);
		scanf("\n"); getline(cin,x.dc);
		getline(cin,x.khoa) ;cin>>x.luong;
		return in; 
	} 
	friend ostream& operator <<(ostream& out,teacher x){
		cout<<x.ma<<" "<<x.ten<<" "<<x.ns<<" "<<x.dc<<" "<<x.khoa<<" "<<x.luong<<endl;
		return out; 
	}
	friend bool operator < (teacher a, teacher b){
		if(a.luong!=b.luong) return a.luong>b.luong;
		else return a.ma<b.ma; 
	} 
};
int main() 
{
	int n; cin>>n;
	vector <student> v1;
	vector <teacher> v2; 
	while(n--){
		string ma; cin>>ma;
		if(ma[0]=='G'){
			teacher x; cin>>x;
			x.setma(ma);
			v2.push_back(x); 
		}else{
			student x; cin>>x;
			x.setma(ma);
			v1.push_back(x); 
		} 
	} 
	sort(v1.begin(),v1.end()); sort(v2.begin(),v2.end());
	cout<<"DANH SACH GIAO VIEN :"<<endl;
	for(int i=0;i<v2.size();i++) cout<<v2[i];
	cout<<"DANH SACH SINH VIEN :"<<endl;
	for(int i=0;i<v1.size();i++) cout<<v1[i];
	return 0; 
}

