#include<iostream>
#include<iomanip>
#include<sstream>
#include<vector>
#include<string> 

using namespace std;

struct sinhvien 
{	
	string ten,ns,dc;
	double gpa;
	int thang; 
	friend istream& operator >>(istream & in,sinhvien &x){
		scanf("\n"); getline(cin,x.ten);
		cin>>x.ns;
		scanf("\n"); getline(cin,x.dc); 
		cin>>x.gpa;
		stringstream ss(x.ns);
		string world;
		vector<string> v;
		while(getline(ss,world,'/')){
			v.push_back(world); 
		} 
		x.thang=stoi(v[1]); 
		return in; 
	}  
	friend ostream& operator <<(ostream & out,sinhvien x){
		cout<<x.ten<<" "<<x.ns<<" "<<x.dc<<" "<<fixed<<setprecision(2)<<x.gpa<<endl;
		return out; 
	}
};   
int main() 
{
	int n; cin>>n;
	sinhvien a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i].thang==4) cout<<a[i]; 
	} 
	return 0; 
}
