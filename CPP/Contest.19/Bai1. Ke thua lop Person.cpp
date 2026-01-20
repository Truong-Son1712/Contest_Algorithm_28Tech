#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<iomanip> 

using namespace std;

string getdc(string s)
{
	string dc;
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i]) || s[i] ==' ') dc+=s[i]; 
	} 
	return dc; 
}
string getns(string s) 
{
	string ns;
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])||s[i]=='/') ns+=s[i]; 
	} 
	if(ns[1]=='/') ns="0"+ns;
	if(ns[4]=='/') ns.insert(3,"0");
	return ns; 
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
	string ten,ns,dc;
public:
	Person(){
		ten="",ns="",dc=""; 
	}  
}; 
class Student : public Person 
{
private:
	string ma,lop;
	double gpa;
public:
	friend istream& operator >>(istream& in, Student &x) { 
		string s1;scanf("\n");getline(cin,s1); chuanhoa1(s1); x.ten=s1;
		string s2;scanf("\n");getline(cin,s2); x.ns=getns(s2); x.dc=getdc(s2);
		cin>>x.lop>>x.gpa; 
		return in; 
	}
	void setma(int n){
		string tt=to_string(n);
		string so0(4-tt.size(),'0');
		ma=so0+tt; 
	} 
	friend ostream& operator <<(ostream& out,Student x){
		cout<<x.ma<<" "<<x.ten<<" "<<x.ns<<" "<<x.dc<<" "<<x.lop<<" "<<fixed<<setprecision(2)<<x.gpa<<endl;
		return out; 
	} 
};
int main() 
{
	int n; cin>>n;
	vector<Student> v; 
	for(int i=0;i<n;i++){
		Student x; cin>>x;
		x.setma(i+1);
		v.push_back(x); 
	} 
	for(int i=0;i<v.size();i++) cout<<v[i];
	return 0; 
}
