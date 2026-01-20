#include<iostream>
#include<algorithm> 
#include<iomanip>
 
using namespace std;

struct sinhvien 
{
	string ten,ns,dc;
	double gpa;
	friend istream& operator >>(istream & in,sinhvien &x){
		scanf("\n"); getline(cin,x.ten);
		cin>>x.ns;
		scanf("\n"); getline(cin,x.dc);
		cin>>x.gpa; 
		return in; 
	}
	friend ostream& operator <<(ostream & out,sinhvien x){
		out<<x.ten<<" "<<x.ns<<" "<<x.dc<<" "<<fixed<<setprecision(2)<<x.gpa<<endl; 
		return out; 
	}  
	friend bool operator < (sinhvien a,sinhvien b){
		return a.gpa>b.gpa; 
	}
};
int main() 
{
	int n; cin>>n; 
	sinhvien a[n]; 
	for(int i=0;i<n;i++) cin>>a[i];
	stable_sort(a,a+n);
	for(int i=0;i<n;i++) cout<<a[i];
	return 0; 
}
