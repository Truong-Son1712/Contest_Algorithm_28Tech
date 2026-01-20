#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

class tamgiac 
{
private:
	double xa,ya,xb,yb,xc,yc,dt,cv,a,b,c;
public:
	friend istream& operator >>(istream& in,tamgiac &h){
		cin>>h.xa>>h.ya>>h.xb>>h.yb>>h.xc>>h.yc;
		h.a=sqrt((h.xa-h.xb)*(h.xa-h.xb)+(h.ya-h.yb)*(h.ya-h.yb)); 
		h.b=sqrt((h.xa-h.xc)*(h.xa-h.xc)+(h.ya-h.yc)*(h.ya-h.yc)); 
		h.c=sqrt((h.xc-h.xb)*(h.xc-h.xb)+(h.yc-h.yb)*(h.yc-h.yb)); 
	} 
	double chuvi(){
		cv=a+b+c;
		return cv; 
	} 
	double dientich(){
		double p=(a+b+c)/2;
		dt=sqrt(p*(p-a)*(p-b)*(p-c)); 
		return dt; 
	} 
	bool check(){
		if(a*b*c==0||a+b<c||a+c<b||b+c<a) return false;
		return true; 
	} 
	friend ostream& operator <<(ostream& out,tamgiac h){
		cout<<fixed<<setprecision(3)<<h.chuvi()<<" "<<h.dientich()<<endl; 
	} 
};
int main() 
{
	int T; cin>>T;
	while(T--){
		tamgiac x; cin>>x;
		if(x.check()) cout<<x;
		else cout<<"INVALID"; 
	} 
	return 0; 
}
