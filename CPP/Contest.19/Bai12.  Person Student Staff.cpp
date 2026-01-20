#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class person 
{
protected:
	string ten, dc;	
};
class student : public person 
{
private:
	string ctr;
	int nam, hp;
public: 
	friend istream& operator >>(istream& in, student &x){
		scanf("\n"); getline(cin,x.ten); getline(cin,x.dc); getline(cin,x.ctr);
		cin>>x.nam>>x.hp;
		string s; cin>>s; 
		return in; 
	} 
	friend ostream& operator <<(ostream& out, student x){
		cout<<"Full Name : "<<x.ten<<endl;
		cout<<"Address : "<<x.dc<<endl;
		cout<<"Program : "<<x.ctr<<endl;
		cout<<"Year : "<<x.nam<<endl;
		cout<<"Fee : "<<x.hp<<" $"<<endl;
		cout<<"-----------------"<<endl;
		return out; 
	} 
	friend bool operator <(student a, student b){
		if(a.hp!=b.hp) return a.hp>b.hp;
		else return a.ten<b.ten; 
	} 
};
class staff : public person 
{
private:
	string truong;
	int luong;
public:
	friend istream& operator >> (istream& in, staff &x){
		scanf("\n"); getline(cin,x.ten); getline(cin,x.dc); getline(cin,x.truong); 
		cin>>x.luong;
		string s; cin>>s; 
		return in ;
	} 
	friend ostream& operator << (ostream& out, staff x){
		cout<<"Full Name : "<<x.ten<<endl;
		cout<<"Address : "<<x.dc<<endl;
		cout<<"School : "<<x.truong<<endl;
		cout<<"Pay : "<<x.luong<<" $"<<endl;
		cout<<"-----------------"<<endl;
		return out; 
	} 
	friend bool operator <(staff a,staff b){
		if(a.luong!=b.luong) return a.luong>b.luong;
		else return a.ten<b.ten; 
	} 
};
int main() 
{
	int n,m; cin>>n>>m;
	vector<student> v1;
	vector<staff> v2;
	string s; cin>>s; 
	for(int i=0;i<n;i++){ 
		student x; cin>>x;
		v1.push_back(x); 
	} 
	for(int i=0;i<m;i++){
		staff x; cin>>x;
		v2.push_back(x); 
	} 
	sort(v1.begin(),v1.end()); sort(v2.begin(),v2.end());
	cout<<"Student List :"<<endl<<"-----------------"<<endl;
	for(int i=0;i<v1.size();i++){
		cout<<v1[i];
	} 
	cout<<"Staff List :"<<endl<<"-----------------"<<endl;
	for(int i=0;i<v2.size();i++){
		cout<<v2[i];
	} 
	return 0; 
}
