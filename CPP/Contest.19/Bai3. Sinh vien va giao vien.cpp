#include<iostream>
#include<string>
#include<sstream>
#include<vector>
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
};
class Student : public Person 
{
private:
	string lop;
	double gpa;
public:
	friend istream& operator >>(istream& in, Student &x){
		cin.ignore(); getline(cin,x.ten); chuanhoa1(x.ten); 
		cin>>x.ns;  chuanhoa2(x.ns);
		cin.ignore(); getline(cin,x.dc);
		cin>>x.lop>>x.gpa;
		return in; 
	} 
	void setma(string s){
		ma=s; 
	} 
	friend ostream& operator <<(ostream& out, Student x){
		cout<<x.ma<<" "<<x.ten<<" "<<x.ns<<" "<<x.dc<<" "<<x.lop<<" "<<fixed<<setprecision(2)<<x.gpa<<endl; 
		return out; 
	} 
};
class Teacher : public Person 
{
private:
	string khoa;
	long long luong; 
public:
	friend istream& operator >>(istream& in, Teacher &x){
		cin.ignore(); getline(cin,x.ten); chuanhoa1(x.ten); 
		cin>>x.ns;  chuanhoa2(x.ns);
		cin.ignore(); getline(cin,x.dc);
		getline(cin,x.khoa); cin>>x.luong;
		return in; 
	} 
	void setma(string s){
		ma=s; 
	} 
	friend ostream& operator <<(ostream& out, Teacher x){
		cout<<x.ma<<" "<<x.ten<<" "<<x.ns<<" "<<x.dc<<" "<<x.khoa<<" "<<x.luong<<endl; 
		return out; 
	} 
};
int main() 
{
	int n; cin>>n;
	vector<Student> v1;
	vector<Teacher> v2; 
	while(n--) {
		string Ma; cin>>Ma;
		if(Ma.substr(0,2)=="SV"){
			Student x; cin>>x;
			x.setma(Ma);
			v1.push_back(x); 
		}else{
			Teacher x; cin>>x;
			x.setma(Ma);
			v2.push_back(x); 
		} 
	}
	cout<<"DANH SACH GIAO VIEN :"<<endl;
	for(int i=0;i<v2.size();i++) cout<<v2[i];
	cout<<"DANH SACH SINH VIEN :"<<endl;
	for(int i=0;i<v1.size();i++) cout<<v1[i];
	return 0; 
}
