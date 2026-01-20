#include<iostream>
#include<math.h> 

using namespace std;

int main()
{	
	int a1,a2,a3,b1,b2,b3,n;
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
	int sum1=a1+a2+a3, sum2=b1+b2+b3;
	int cup=ceil((double)sum1/5);int  hc=ceil((double)sum2/10);
	if(cup+hc>n) cout<<"NO";
	else cout<<"YES"; 
	return 0; 
} 
