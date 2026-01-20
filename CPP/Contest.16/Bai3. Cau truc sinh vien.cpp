#include<iostream>

using namespace std;

struct diem
{
	int toan,li,hoa; 
}; 
struct sinhvien 
{
	string ten,ns,dc;
	diem d;
	int tong;
	string tt;
	friend istream& operator >>(istream & in,sinhvien &x){
		scanf("\n"); getline(cin,x.ten);
		cin>>x.ns;
		scanf("\n"); getline(cin,x.dc);
		cin>>x.d.toan>>x.d.li>>x.d.hoa;
		x.tong=x.d.toan+x.d.li+x.d.hoa; 
		if(x.tong>=24) x.tt="DO";
		else x.tt="TRUOT"; 
		return in; 
	} 	
	friend ostream& operator <<(ostream & out,sinhvien x){
		out<<x.ten<<" "<<x.ns<<" "<<x.dc<<" "<<x.tong<<" "<<x.tt<<endl;; 
		return out; 
	}  
};
int main() 
{
	int n; cin>>n;
	sinhvien a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int res=0; 
	for(int i=0;i<n;i++){
		res=max(res,a[i].tong); 
	} 
	cout<<"DANH SACH THU KHOA :"<<endl;
	for(int i=0;i<n;i++){
		if(a[i].tong==res) cout<<a[i].ten<<" "<<a[i].ns<<" "<<a[i].dc<<" "<<a[i].tong<<endl; 
	} 
	cout<<"KET QUA XET TUYEN:"<<endl;
	for(int i=0;i<n;i++) cout<<a[i];
	return 0; 
}
