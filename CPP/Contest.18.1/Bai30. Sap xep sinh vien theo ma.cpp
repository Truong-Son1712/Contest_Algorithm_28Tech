#include<iostream>
#include<string>
#include<algorithm> 
#include<vector> 

using namespace std;

class sinhvien 
{
private:
	string ma,ten,lop,email;
public:
	friend istream& operator >>(istream& in, sinhvien &x) {
		cin>>x.ma; scanf("\n"); getline(cin,x.ten); cin>>x.lop>>x.email; 
		return in; 
	}
	friend ostream& operator <<(ostream& out, sinhvien x) {
		cout<<x.ma<<" "<<x.ten<<" "<<x.lop<<" "<<x.email<<endl; 
		return out; 
	}
	friend bool operator < (sinhvien a,sinhvien b){
		return a.ma<b.ma; 
	} 
};
int main() 
{
	sinhvien x;
	vector<sinhvien> v; 
	while(cin>>x){
		v.push_back(x); 
	} 
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++) cout<<v[i];
	return 0; 
}
