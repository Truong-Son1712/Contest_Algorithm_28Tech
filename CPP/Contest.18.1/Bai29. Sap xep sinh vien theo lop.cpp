#include<iostream>
#include<string>
#include<algorithm> 

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
		if(a.lop!=b.lop) return a.lop<b.lop;
		else return a.ma<b.ma; 
	} 
};
int main() 
{
	int n; cin>>n;
	sinhvien a[n]; 
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++) cout<<a[i];
	return 0; 
}
