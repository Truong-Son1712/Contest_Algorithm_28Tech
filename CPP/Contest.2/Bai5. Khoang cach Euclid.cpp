#include<iostream>
#include<iomanip>
#include<math.h> 

using namespace std;

int main() 
{
	int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
	long long f=(long long)(x1-x2)*(x1-x2)+(long long)(y1-y2)*(y1-y2);
	cout<< fixed<<setprecision(2)<<sqrt(f);
	return 0; 
}
