#include<iostream>

using namespace std;

int main() 
{
	double d1,d2,d3,d4;
	cin>>d1>>d2>>d3>>d4;
	double sum=d1+d2+d3*2+d4*3;
	double tbc=sum/7;
	if(tbc>=8) cout<<"GIOI";
	else if(tbc>=6.5) cout<<"KHA";
	else if(tbc>=5) cout<<"TRUNG BINH";
	else cout<<"YEU";
	return 0; 
}
