#include<iostream>
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
		if(a[i].gpa>=1) cout<<a[i]; 
	} 
	return 0; 
}
