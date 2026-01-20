#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm> 
 
using namespace std; 

string tenn(string s){
	stringstream ss(s);
	string world;
	vector<string> v;
	while(ss>>world){
		v.push_back(world); 
	} 
	world=""; world+=v[v.size()-1]+" ";
	for(int i=0;i<v.size()-2;i++) world +=v[i]+" "; 
	world+= v[v.size()-2];
	return world; 
} 
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
	string ten,ns,dc; 
public:
	Person(){
		ten="",ns="",dc=""; 
	}	
};
class Student : public Person 
{
private: 
	string ma,lop,tenng; 
	double gpa;	
public: 
	friend istream& operator >>(istream& in,Student &x){
		scanf("\n"); getline(cin,x.ten); chuanhoa1(x.ten); x.tenng=tenn(x.ten); 
		cin>>x.ns; chuanhoa2(x.ns);
		scanf("\n"); getline(cin,x.dc);
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
	friend bool operator <(Student a, Student b){
		if(a.tenng!=b.tenng) return a.tenng<b.tenng;
		else return a.ma<b.ma; 
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
	stable_sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++) cout<<v[i];
	return 0; 
}
