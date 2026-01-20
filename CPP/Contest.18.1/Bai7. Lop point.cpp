#include<iostream>
#include<math.h>
#include<iomanip> 

using namespace std;

class toado 
{
private: 
	double x,y; 
public:
	friend istream& operator >>(istream& in,toado &a){
		cin>>a.x>>a.y;
		return in; 
	} 
	friend double operator ^ (toado a,toado b){
		int res;
		res=(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
		res=sqrt(res);
		return res; 
	} 
};
int main() 
{
	int T; cin>>T;
	while(T--){
		toado a,b; cin>>a>>b;
		double res= a ^ b;
		cout<<fixed<<setprecision(4)<<res<<endl; 
	} 
	return 0; 
}
