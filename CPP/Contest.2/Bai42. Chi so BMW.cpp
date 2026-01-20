#include<iostream>

using namespace std;

int main() 
{
	double w,h1; cin>>w>>h1;
	double h=h1/100;
	double BMW= w/(h*h);
	if(BMW<18.5) cout<<"Under weight";
	else if(BMW>=18.5&&BMW<25) cout<<"Normal";
	else if(BMW>=25&&BMW<30) cout<<"Over weight";
	else if(BMW>=30&&BMW<35) cout<<"Obesity 1";
	else if(BMW>=35&&BMW<40) cout<<"Obesity 2";
	else cout<<"Extreme obesity";
	return 0; 
}
