#include<iostream>
#include<algorithm>  

using namespace std;

class phanso 
{
private:
	long long tu,mau; 
public:
	friend istream& operator >>(istream &in,phanso &x){
		cin>> x.tu >> x.mau;
		long long du=__gcd(x.tu,x.mau);
		x.tu=x.tu/du;
		x.mau=x.mau/du; 
		return in; 
	} 
	friend ostream& operator <<(ostream &out,phanso x){
		cout<<x.tu<<"/"<<x.mau<<endl;
		return out; 
	} 
};
int main()
{
	phanso x;
	cin>>x;
	cout<<x;
	return 0; 
}
