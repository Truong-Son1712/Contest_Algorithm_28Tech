#include<iostream>

using namespace std;

int gcd(int a,int b) 
{
	while(b!=0){
		int du=a%b;
		a=b;
		b=du; 
	}
	return a; 
}
int lcm(int a,int b)
{
	return a/gcd(a,b)*b; 
} 
struct phanso 
{
	int tu,mau;
	void rutgon() 
	{
		int uc=gcd(tu,mau);
		tu/=uc;
		mau/=uc; 
	}
	friend phanso operator - (phanso a, phanso b){
		phanso res;
		res.tu=a.tu*b.mau-b.tu*a.mau;
		res.mau=a.mau*b.mau; 
		res.rutgon();
		return res; 
	}
};
int main() 
{
	phanso a;
	cin>>a.tu>>a.mau;
	while(a.tu!=0) 
	{
		int x; 
		if(a.mau%a.tu==0){
			x=a.mau/a.tu; 
		}else{
			x=a.mau/a.mau+1; 
		} 
		phanso dv{1,x};
		cout<<1<<'/'<<x;
		a=a-dv;
		if(a.tu!=0) cout<<" + "; 
	}
	return 0; 
}
