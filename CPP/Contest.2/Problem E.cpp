#include<iostream>
#include<iomanip> 
#include<math.h> 

using namespace std;

int main() 
{
	double a,b,c; cin>>a>>b>>c; 
	if(a==0&&b==0&&c==0){
		cout<<"VO SO NGHIEM";
		return 0; 
	} 
	else if(a==0&&b==0&&c!=0){
		cout<<"VO NGHIEM";
		return 0; 
	} 
	else if(a==0&&b!=0){
		cout<<fixed<<setprecision(2)<<-c/b;
		return 0; 
	}else{
		double dt=b*b-4*a*c;
		if(dt<0){
			cout<<"VO NGHIEM";
			return 0; 
		} 
		else if(dt==0){
			 cout<<fixed<<setprecision(2)<<-b/(2*a);
			 return 0; 
		}else{
			cout<<fixed<<setprecision(2)<<(-b-sqrt(dt))/(2*a)<<" "<<(-b+sqrt(dt))/(2*a); 
		} 
	} 
	return 0; 
}
